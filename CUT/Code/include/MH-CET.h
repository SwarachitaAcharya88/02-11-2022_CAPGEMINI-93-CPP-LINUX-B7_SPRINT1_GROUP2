#ifndef MH-CET_H
#define MH-CET_H

using namespace std;
class MH-CET{
	public:
		MH-CET();
		MH-CET(string sub1,string sub2,string sub3){
			this->sub1=sub1;
			this->sub2=sub2;
			this->sub3=sub3;
		}
		~MH-CET();
		void setsub1(string sub1);
		string getsub1();
		void setsub2(string sub2);
		string getsub2();
		void setsub3(string sub3);
		string getsub3();
		virtual void displayMH-CET();
	private:
		string sub1,string sub2,string sub3;
};
#endif