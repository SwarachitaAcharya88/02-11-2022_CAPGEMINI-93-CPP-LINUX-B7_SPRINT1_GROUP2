#include <iostream>
#include <ExamCenter.h>

using namespace std;

int main(int argc,char *argv[])
{
	if(argc!=1)
	{
		cout<<"Invalid data"<<endl;
		return 1;
	}
	ExamCenter ec;
	ec.readInputFile(argv[1]);
}
