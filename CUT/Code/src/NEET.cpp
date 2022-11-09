#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

void Exam::show(vector<Exam>NEET)::iterator i;
	for(int i=NEET.begin();i!=NEET.end();++i)
	{
		cout<<"YearofPassing"<<endl;
		cout<<i->YearofPassing<<endl;
	}
NEET::NEET(int YearofPassing){
	this->YearofPassing=YearofPassing;
	
	}
int YearofPassing::getYearofPassing(){
	return YearofPassing;
}

virtual void displayNEET() const{
	cout<<YearofPassing<<endl;
};
