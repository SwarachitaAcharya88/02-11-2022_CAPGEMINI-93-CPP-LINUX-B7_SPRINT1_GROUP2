#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

void Exam::show(vector<Exam>MPSC)::iterator i;
	for(int i=MPSC.begin();i!=MPSC.end();++i)
	{
		cout<<"startDate"<<","<<"endDate"<<","<<"attemptNo"<<endl;
		cout<<i->startDate<<","<<i->endDate<<","<<i->attemptNo<<endl;
	}
MPSC::MPSC(string startDate,string endDate,int attemptNo){
	this->startDate=startDate;
	this->endDate=endDate;
	this->attemptNo=attemptNo;
	}
string startDate::getstartDate(){
	return startDate;
}
string endDate::getendDate(){
	return endDate;
}
int attemptNo::getattemptNo(){
	return attemptNo;
}
virtual void displayMPSC() const{
	cout<<startDate<<","<<endDate<<","<<attemptNo<<endl;
};
