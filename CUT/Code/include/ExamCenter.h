#ifndef ExamCenter_H
#define ExamCenter_H

using namespace std;

class ExamCenter{
	public:
		ExamCenter(string EX001,string EX002,string EX003,string EX004){
			this->EX001=EX001;
			this->EX002=EX002;
			this->EX003=EX003;
			this->EX004=EX004;
		}
		~ExamCenter();
		void setEX001(string EX001);
		string getEX001();
		void setEX002(string EX002);
		string getEX002();
		void setEX003(string EX003);
		string getEX003();
		void setEX004(string EX004);
		string getEX004();
	private:
		string EX001,string EX002,string EX003,string EX004;
};
#endif;
