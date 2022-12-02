#include <iostream>
#include <MHCET.h>

using namespace std;

MHCET::MHCET(string CandidateId,string Candidatename,string ExamId,string sub1,string sub2,string sub3){
	this->sub1=sub1;
	this->sub2=sub2;
	this->sub3=sub3;
}
string MHCET::getsub1(){
	return sub1;
}
string MHCET::getsub2(){
	return sub2;
}
string MHCET::getsub3(){
	return sub3;
}

void MHCET::displayCandidate() const{
	Candidate::displayCandidate();
	cout<<","<<sub1<<"|"<<sub2<<"|"<<sub3<<endl;
}
