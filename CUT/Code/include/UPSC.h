#ifndef UPSC_H
#define UPSC_H

using namespace std;

class UPSC{
	public:
		UPSC();
		UPSC(string startDate,string endDate,string State){
			this->startDate=startDate;
			this->endDate=endDate;
			this->State =State;
		}
		~UPSC();
		void setstartDate(string startDate);
		string getstartDate();
		void setendDate(string endDate);
		string getendDate();
		void setState(string State);
		string getState();
		virtual void dispalyUPSC();
	private:
		string startDate,string endDate,string State;
};
#endif;