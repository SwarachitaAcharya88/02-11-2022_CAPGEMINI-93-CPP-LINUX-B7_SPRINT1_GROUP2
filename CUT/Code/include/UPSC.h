#ifndef UPSC_H
#define UPSC_H
#include <Candidate.h>

using namespace std;

class UPSC:public Candidate{
	public:
		UPSC(){};
		UPSC(string CandidateId,string Candidatename,string ExamId,string startDate,string endDate,string state);
			
		~UPSC();
		string getstartDate();
		string getendDate();
		string getstate();
		void displayCandidate() const;
	private:
		string startDate;
		string endDate;
		string state;
};
#endif
