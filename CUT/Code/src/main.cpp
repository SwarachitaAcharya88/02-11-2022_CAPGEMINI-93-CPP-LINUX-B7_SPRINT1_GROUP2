#include <iostream>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <vector>
#include <iterator>


using namespace std;


int main(int argc,char *argv[])     //command-line argument strings
int count,temp=0,as;                        
void file::readfile()(const char* i,const char* o) 
if(ExamCenter==EX001)
{
	cin>>ExamId>>'\n'>>CenterName>>'\n'>>Address>>'\n'>>Capacity>>endl;
	ifstream EX001_list.txt;
	try{
		EX001_list.txt.open(i);
		if(!EX001_list.txt.is_open())
		{
			throw "file not found";
		}
	}
	catch(...){
		cout<<"file not found"<<endl;
	}
	for(count=0;count<argc;count++)
	{
		temp+=count;
		cout<<"total filled seats :"<<temp<<endl;
	}
	as=1200-temp;
	cout<<"available seats:"<<as<<endl;
	if(temp>1200)
	{
		ofstream unassigned;
		try{
			unassigned.open(o);
			if(!unassigned.is_open())
			{
				throw "file not found";
			}
		catch(...){
			cout<<"file not found"<<endl;
		}
	}

}
if(ExamCenter==EX002)
{
	cin>>ExamId>>'\n'>>CenterName>>'\n'>>Address>>'\n'>>Capacity>>endl;
	ifstream EX002_list.txt;
	try{
		EX002_list.txt.open(i);
		if(!EX002_list.txt.is_open())
		{
			throw "file not found";
		}
	catch(...){
		cout<<"file not found"<<endl;
	}
	for(count=0;count<argc;count++)
	{
		temp+=count;
		cout<<"total filled seats :"<<temp<<endl;
	}
	as=3000-temp;
	cout<<"available seats:"<<as<<endl;
	if(Candidate>3000)
	{
		ofstream unassigned;
		try{
			unassigned.open(o);
			if(!unassigned.is_open())
			{
				throw "file not found";
			}
		catch(...){
			cout<<"file not found"<<endl;
		}
	}
}
if(ExamCenter==EX003)
{
	cin>>ExamId>>'\n'>>CenterName>>'\n'>>Address>>'\n'>>Capacity>>endl;
	ifstream EX003_list.txt;
	try{
		EX003_list.txt.open(i);
		if(!EX003_list.txt.is_open())
		{
			throw "file not found";
		}
	catch(...){
		cout<<"file not found"<<endl;
	}
	for(count=0;count<argc;count++)
	{
		temp+=count;
		cout<<"total filled seats :"<<temp<<endl;
	}
	as=1500-temp;
	cout<<"available seats:"<<as<<endl;
	if(Candidate>1500)
	{
		ofstream unassigned;
		try{
			unassigned.open(o);
			if(!unassigned.is_open())
			{
				throw "file not found";
			}
		catch(...){
			cout<<"file not found"<<endl;
		}
	}
}
if(ExamCenter==EX004)
{
	cin>>ExamId>>'\n'>>CenterName>>'\n'>>Address>>'\n'>>Capacity>>endl;
	ifstream EX004_list.txt;
	try{
		EX004_list.txt.open(i);
		if(!EX004_list.txt.is_open())
		{
			throw "file not found";
		}
	catch(...){
		cout<<"file not found"<<endl;
	}
	for(count=0;count<argc;count++)
	{
		temp+=count;
		cout<<"total filled seats :"<<temp<<endl;
	}
	as=1500-temp;
	cout<<"available seats:"<<as<<endl;
	if(Candidate>1500)
	{
		ofstream unassigned;
		try{
			unassigned.open(o);
			if(!unassigned.is_open())
			{
				throw "file not found";
			}
		catch(...){
			cout<<"file not found"<<endl;
		}
	}
}
