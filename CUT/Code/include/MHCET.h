#ifndef MHCET_H
#define MHCET_H
#include <Candidate.h>

using namespace std;

class MHCET:public Candidate{

	public:
		MHCET(){};
		MHCET(string CandidateId,string Candidatename,string ExamId,string sub1,string sub2,string sub3);
		
		~MHCET(){};
		string getsub1();
		string getsub2();
		string getsub3();
		void displayCandidate() const; 
	private:
		string sub1;
		string sub2;
		string sub3;
};
#endif
