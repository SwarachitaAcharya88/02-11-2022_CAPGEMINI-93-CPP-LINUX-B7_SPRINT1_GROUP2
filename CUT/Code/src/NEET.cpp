#include <iostream>
#include <NEET.h>

using namespace std;

NEET::NEET(string CandidateId,string Candidatename,string ExamId,int YearofPassing){
	this->YearofPassing=YearofPassing;
}
int NEET::getYearofPassing(){
	return YearofPassing;
}

void NEET::displayCandidate() const{
	Candidate::displayCandidate();
	cout<<","<<YearofPassing<<endl;
}
