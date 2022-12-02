#ifndef CANDIDATE_H
#define CANDIDATE_H
#include <vector>
#include <algorithm>

using namespace std;

class Candidate {
	protected:
		string CandidateId;
		string Candidatename;
		string ExamId;
	public:
		void show(vector<Candidate> Candidates);
		Candidate(){};
		Candidate(string CandidateId,string Candidatename,string ExamId);
		~Candidate(){};
		string getCandidateId();
		string getCandidatename();
		string getExamId();
		virtual void displayCandidate() const;

};
#endif
