#include <iostream>
#include <algorithm>
#include <vector>
#include <Candidate.h>

using namespace std;

void Candidate::show(vector<Candidate> Candidates){
	vector<Candidate>::iterator it;
	for(it=Candidates.begin();it!=Candidates.end();++it)
	{
		cout<<"CandidateId:"<<"Candidatename:"<<"ExamId:"<<endl;
		cout<<it->CandidateId<<it->Candidatename<<it->ExamId<<endl;
	}
}

Candidate ::Candidate(string CandidateId,string Candidatename,string ExamId){
	this->CandidateId=CandidateId;
	this->Candidatename=Candidatename;
	this->ExamId=ExamId;
	}
string Candidate::getCandidateId(){
	return CandidateId;
}
string Candidate::getCandidatename(){
	return Candidatename;
}
string Candidate::getExamId(){
	return ExamId;
}

void Candidate::displayCandidate() const{
	cout<<CandidateId<<","<<Candidatename<<","<<ExamId<<endl;
};
