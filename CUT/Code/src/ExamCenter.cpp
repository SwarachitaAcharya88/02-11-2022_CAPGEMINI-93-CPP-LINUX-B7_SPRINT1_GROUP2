#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <array>
#include <mutex>
#include <ostream>
#include <istream>
#include <Candidate.h>
#include <MHCET.h>
#include <UPSC.h>
#include <MPSC.h>
#include <NEET.h>
#include <ExamCenter.h>

using namespace std;

/*std::mutex m1;
std::mutex m2;
std::mutex m3;
std::mutex m4;*/


int ExamCenter::readInputFile(const char* InputFile)
{
	int i=0,c;
	ifstream Input;
	Input.open(InputFile);
	try
	{
		if(!Input.is_open())
		{
			cout<<"Unable to open file"<<InputFile<<endl;
			return 1;
		}
	}
	catch(...)
	{
		cout<<"Unable to open file"<<endl;
	}

	string line;
	while(getline(Input,line))
	{
		string line;
		stringstream ss;
		string CandidateId;
		string Candidatename;
		string ExamId;
		string startDate;
		string endDate;
		string state;
		int attemptNo;
		int YearofPassing;
		string sub1,sub2,sub3;
		int s=0,s1=0,s2=0,s3=0,s4=0;
		string e1,e2,e3,e4;

		if(getline(ss,CandidateId,","))
			s++;
		if(getline(ss,Candidatename,","))
			s++;
		if(getline(ss,ExamId,","))
			s++;

		s1=s2=s3=s4=s;
		
		ss>>sub1;
		sub1=string(sub1);
		if(getline(ss,sub1,"|"))
			s1++;
		ss>>sub2;
		sub2>>string(sub2);
		if(getline(ss,sub2,"|"))
			s1++;
		ss>>sub3;
		sub3=string(sub3);
		if(getline(ss,sub3))
			s1++;

		if(getline(ss,startDate,","))
			s2++;
		if(getline(ss,endDate,","))
			s2++;
		if(getline(ss,state))
			s2++;
		
		if(getline(ss,startDate,","))
			s3++;
		if(getline(ss,endDate,","))
			s3++;
		if(getline(ss,attemptNo))
			s3++;

		if(getline(ss,YearofPassing))
			s4++;

		if(s1==6 && CandidateId!=" " && ExamCenter=="EX001")
		{
			e1[i]=ExamCenter1(CandidateId,Candidatename,ExamId,sub1,sub2,sub3);
			i++;
		}
		else if(s2==6 && CandidateId!=" " && ExamCenter=="EX002")
		{
			e2[i]=ExamCenter2(CandidateId,Candidatename,ExamId,startDate,endDate,state);
			i++;
		}
		else if(s3==6 && CandidateId!=" " && ExamCenter=="EX003")
		{
			e3[i]=ExamCenter3(CandidateId,Candidatename,ExamId,startDate,endDate,attemptNo);
			i++;
		}
		else if (s4==4 && CandidateId!=" " && ExamCenter=="EX004")
		{
			e4[i]=ExamCenter4(CandidateId,Candidatename,ExamId,YearofPassing);
			i++;
		}
		else
		{
			cout<<"Invalid Candidate data"<<endl;
		}
		Input.close();
		return 0;
	}

void Thread::thread1()
{
	ofstream file1;
	file1.open("EX001_list.txt");
	try
	{	
        	if (!file1.is_open())
          	cout<<"invalid file";
	}
	catch(...){
		cout<<"invalid file";
	}
	m1.lock();
	for(int i=0;i<=size(e1);i++)
	{
		cout<<e1<<endl;
		file1<<CandidateId<<","<<examid1<examid1+ExamId;
	}
	m1.unlock();
	file1.close();
}
void Thread::thread2()
{
	ofstream file2;
	file2.open("EX002_list.txt");
	try
	{
		if(!file2.is_open())
		cout<<"invalid file"<<endl;
	}
	catch(...)
	{
		cout<<"invalid file"<<endl;
	}
	m2.lock();
	for(int i=0;i<=size(e2);i++)
	{
		cout<<e2<<endl;
		file2<<CandidateId<<","<<examid2<<examid2+ExamId;
	}
	m2.unlock();
	file2.close();
}
void Thread::thread3()
{
	ofstream file3;
	file3.open("EX003_list.txt");
	try
	{
		if(!file3.is_open())
		cout<<"invalid file"<<endl;
	}
	catch(...)
	{
		cout<<"invalid file"<<endl;
	}
	m3.lock();
	for(int i=0;i<=size(e3);i++)
	{
		cout << e3<<endl;
		file3<<CandidateId<<","<<examid3<<examid3+ExamId;
	}
	m3.unlock();
	file3.close();
}
void Thread::thread4()
{
	ofstream file4;
	file4.open("EX004_list.txt");
	try
	{
		if(!file4.is_open())
		cout<<"invalid file"<<endl;
	}
	catch(...)
	{
		cout <<"invalid file"<<endl;
	}
	m4.lock();
	for(int i=0;i<=size(e4);i++)
	{
		cout<<e4<<endl;
		file3<<CandidateId<<","<<examid4<<examid4+ExamId;
	}
	m4.unlock();
	file4.close();
}

/*file1.close();
file2.close();
file3.close();
file4.close();*/
	return 0;
}
				

		
	

