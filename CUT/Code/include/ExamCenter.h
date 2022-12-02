/*#ifndef ExamCenter_H
#define ExamCenter_H
#include <array>
#define max 50;

using namespace std;

class ExamCenter{
	public:
		ExamCenter(){};
		int readInputFile(const char* InputFile);
	private:
		extern array <ExamCenter1,MAX> EX001;
		extern array <ExamCenter2,MAX> EX002;
		extern array <ExamCenter3,MAX> EX003;
		extern array <ExamCenter4,MAX> EX004;
		
};

class Thread{
	public:
		void thread1();
		void thread2();
		void thread3();
		void thread4();
};

#endif;*/
#ifndef ExamCenter_H
#define ExamCenter_H
#include <array>
#define max 50;

using namespace std;

class ExamCenter{
        public:
                ExamCenter(){};
                int readInputFile(const char* InoutFile);
        private:
                extern array <ExamCenter1,MAX> EX001;
                extern array <ExamCenter2,MAX> EX002;
                extern array <ExamCenter3,MAX> EX003;
                extern array <ExamCenter4,MAX> EX004;

};

class Thread{
        public:
                void thread1();
                void thread2();
                void thread3();
                void thread4();
};
#endif
