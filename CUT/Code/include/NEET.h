#ifndef NEET_H
#define NEET_H

using namespace std;

class NEET{
	public:
		NEET();
		NEET(int YearofPassing){
			this->YearofPassing=YearofPassing;
		}
		~NEET();
		void setYearofPassing(int YearofPassing);
		int getYearofPassing();
		virtual void displayNEET();
	private:
		int YearofPassing;
};
#endif;