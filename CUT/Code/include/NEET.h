#ifndef NEET_H
#define NEET_H
#include <Candidate.h>

using namespace std;

class NEET:public Candidate{
	public:
		NEET(){};
		NEET(string CandidateId,string Candidatename,string ExamId,int YearofPassing);
		~NEET(){};
		int getYearofPassing();
		void displayCandidate() const;
	private:
		int YearofPassing;
};
#endif
