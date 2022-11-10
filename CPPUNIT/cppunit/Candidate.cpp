#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <Candidate.h>

using namespace std;

void Candidate::show(vector<Candidate>Candidate){
	vector<Candidate>::iterator i;
	for(i=Candidate.begin();i!=Candidate.end();++i)
	{
		cout<<"Candidate Id:"<<"Candidate name:"<<endl;
		cout<<i->Candidate Id<<i->Candidate name<<endl;
	}

Candidate ::Candidate(int Id,string name){
	this->Id=Id;
	this->name=name;
	}
int Id::getId(){
	return Id;
}
string name::getname(){
	return name;
}
virtual void displayCandidate() const{
	cout<<"Candidate Id is:"<<Id<<endl;
	cout<<"Candidate Name is:"<<name<<endl;
}
};
