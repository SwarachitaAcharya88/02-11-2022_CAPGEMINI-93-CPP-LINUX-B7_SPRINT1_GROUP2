#include <iostream>
#include <string>
#include <vector>
#include <Candidate.h>
#include <iterator>

using namespace std;

void Candidate::show(vector<Candidate> Candidate){
	vector<Candidate>::iterator i;
	for(int i=Candidate.begin();i!=Candidate.end();++i)
	{
		cout<<"Candidate Id:"<<"Candidate name:"<<endl;
		cout<<i->Candidate Id<<i->Candidate name<<endl;
	}
}
Candidate::Candidate(){
}
void Candidate::setId(int Id){
	this->Id=Id;
}
void Candidate::setName(string name){
	this->name=name;
}

Candidate::Candidate(int Id,string name){
	this->Id=Id;
	this->name=name;
	}
int Candidate::getId(){
	return Id;
}
string Candidate::getName(){
	return name;
}
void displayCandidate(){
	cout<<"Candidate Id is:"<<Id<<endl;
	cout<<"Candidate Name is:"<<name<<endl;
}
Candidate::~Candidate(){
}

