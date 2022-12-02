#include <iostream>
#include <algorithm>
#include <vector>
#include <MPSC.h>

using namespace std;

MPSC::MPSC(string CandidateId,string Candidatename,string ExamId,string startDate,string endDate,int attemptNo){
	this->startDate=startDate;
	this->endDate=endDate;
	this->attemptNo=attemptNo;
}

string MPSC::getstartDate(){
	return startDate;
}
string MPSC::getendDate(){
	return endDate;
}
int MPSC::getattemptNo(){
	return attemptNo;
}

void MPSC::displayCandidate() const{
	Candidate::displayCandidate();
	cout<<","<<startDate<<","<<endDate<<","<<attemptNo<<endl;
}
