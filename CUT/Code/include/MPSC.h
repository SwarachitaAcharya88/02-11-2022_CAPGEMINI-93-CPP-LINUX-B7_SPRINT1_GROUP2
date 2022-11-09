#ifndef MPSC_H
#define MPSC_H

using namespace std;
class MPSC{
	public:
		MPSC();
		MPSC(string StartDate,string endDate,int attemptNo){
			this->StartDate=startDate;
			this->endDate=endDate;
			this->attemptNo=attemptNo;
		}
		~MPSC();
		void setstartDate(string startDate);
		string getstartDate();
		void setendDate(string endDdate);
		string getendDate();
		void setattemptNo(int attemptNo);
		int getattemptNo();
		virtual void displayMPSC();
	private:
		string startDate,string endDate,int attemptNo;
};
#endif