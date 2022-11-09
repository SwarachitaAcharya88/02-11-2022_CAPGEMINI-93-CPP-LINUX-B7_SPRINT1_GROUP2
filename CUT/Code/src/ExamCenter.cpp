#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

void ExamCenter::show(vector<ExamCenter>ExamCenter)::iterator i;
	for(int i=ExamCenter.begin();i!=ExamCenter.end();++i)
	{
		cout<<"ExamId"<<'\n'<<"CenterName"<<'\n'<<"Address"<<'\n'<<"Capacity"<<'\n'<<endl;
	cout<<i->ExamId<<'\n'<<i->CenterName<<'\n'<<i->Address<<'\n'<<i->Capacity<<endl;
	}
ExamCenter::ExamCenter(string ExamId,string CenterName,string Address,int Capacity){
	this->ExamId=ExamId;
	this->CenterName=CenterName;
	this->Address=Address;
	this->Capacity=Capacity;
	}
string ExamId::getExamId(){
	return ExamId;
}
string CenterName::getCenterName(){
	return CenterName;
}
string Address::getAdderss(){
	return Address;
}
int Capacity::getCapacity(){
	return Capacity;
}
virtual void displayExamCenter() const{
	cout<<ExamId<<'\n'<<CenterName<<'\n'<<Address<<'\n'<<Capacity<<'\n'<<endl;
};		
