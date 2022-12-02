#ifndef MPSC_H
#define MPSC_H
#include <Candidate.h>

using namespace std;

class MPSC:public Candidate{
	public:
		MPSC(){};
		MPSC(string CandidateId,string Candidatename,string ExamId,string StartDate,string endDate,int attemptNo);
			
		
		~MPSC(){};
		string getstartDate();
		string getendDate();
		int getattemptNo();
		void displayCandidate() const;
	private:
		string startDate;
		string endDate;
		int attemptNo;
};
#endif
