#ifndef CANDIDATE_H
#define CANDIDATE_H

using namespace std;

class Candidate {
	public:
		Candidate();
		Candidate(int Id,string name);
		~Candidate();
		void setId(int Id);
		int getId();
		void setName(string name);
		string getName();
		void displayCandidate();
		void show(vector<Candidate> Candidate);
		
	private:
		int Id;
		string name;
	
};
#endif
