#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

void Exam::show(vector<Exam>UPSC)::iterator i;
	for(int i=UPSC.begin();i!=UPSC.end();++i)
	{
		cout<<"startDate"<<","<<"endDate"<<","<<"State"<<endl;
		cout<<i->startDate<<","<<i->endDate<<","<<i->State<<endl;
	}
UPSC::UPSC(string startDate,string endDate,string State){
	this->startDate=startDate;
	this->endDate=endDate;
	this->State=State;
	}
string startDate::getstartDate(){
	return startDate;
}
string endDate::getendDate(){
	return endDate;
}
string State::getState(){
	return State;
}
virtual void displayUPSC() const{
	cout<<startDate<<","<<endDate<<","<<State<<endl;
};
