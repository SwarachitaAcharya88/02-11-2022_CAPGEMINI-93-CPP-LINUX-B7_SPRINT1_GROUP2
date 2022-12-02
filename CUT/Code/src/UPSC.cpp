#include <iostream>
#include <UPSC.h>

using namespace std;

UPSC::UPSC(string CandidateId,string Candidatename,string ExamId,string startDate,string endDate,string state){
	this->startDate=startDate;
	this->endDate=endDate;
	this->state=state;
}

string UPSC::getstartDate(){
	return startDate;
}
string UPSC::getendDate(){
	return endDate;
}
string UPSC::getstate(){
	return state;
}

void UPSC::displayCandidate() const{
	Candidate::displayCandidate();
	cout<<","<<startDate<<","<<endDate<<","<<state<<endl;
}
