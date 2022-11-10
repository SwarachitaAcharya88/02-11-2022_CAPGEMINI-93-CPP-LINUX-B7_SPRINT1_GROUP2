#ifndef CANDIDATE_H
#define CANDIDATE_H

using namespace std;

class Candidate {
	public:
		Candidate();
		Candidate(int Id,string name){
			this->Id=Id;
			this->name=name;
		}
		~Candidate();
		void setId(int Id);
		int getId();
		void setname(string name);
		string getname();
		virtual void displayCandidate();
		
	private:
		int Id;
		string name;
	
};
#endif
