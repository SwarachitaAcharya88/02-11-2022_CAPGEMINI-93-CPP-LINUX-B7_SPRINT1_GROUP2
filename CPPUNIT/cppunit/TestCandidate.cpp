#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>

#include <Candidate.h>

using namespace CppUnit;
using namespace std;

//-----------------------------------------------------------------------------

class TestCandidate : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestCandidate);
    CPPUNIT_TEST(testCandidateId);
    CPPUNIT_TEST(testCandidatename);
    CPPUNIT_TEST(testExamId);	
    CPPUNIT_TEST(testExamCenter);

    CPPUNIT_TEST_SUITE_END();

public:
    void setUp(void);
    void tearDown(void);

protected:
    void testExamId(void);
    void testCandidateId(void);
    void testExamCenter(void);
 
private:

   
   Candidate  *arr[50];
};

//-----------------------------------------------------------------------------

void
TestCandidate::testExamCenter(void)
{
    CPPUNIT_ASSERT(EX001== arr[1]->getMHCET());
}

void
TestCandidate::testExamCenter(void)
{
    CPPUNIT_ASSERT(EX002== arr[2]->getUPSC());
}

void
TestCandidate::testExamCenter(void)
{

    CPPUNIT_ASSERT(EX003== arr[3]->getMPSC());
}void
TestCandidate::testExamCenter(void)
{
    CPPUNIT_ASSERT(EX004== arr[4]->getNEET());
}



void TestCandidate::setUp(void)
{
    
	arr[1]=new Candidate();
	arr[2]=new Candidate();
	arr[3]=new Candidate();
	arr[4]=new Candidate();
    arr[1]->setCandidate("M001","Asha Sipahi","MH-CET","Physics|Chemistry|Geology"); 
    arr[2]->setCandidate("U001","Surekha Patil","UPSC","01/08/2022","01/08/2022");
    arr[3]->setCandidate("M010","Umesh Mohite","MH-CET","Physics|Chemistry|Math");
    arr[4]->setCandidate("U002:","Sharad Venupalli:","NEET:","2020");


}

void TestCandidate::tearDown(void)
{
   
	delete[] *arr;
}

//-----------------------------------------------------------------------------

CPPUNIT_TEST_SUITE_REGISTRATION( TestCandidate );

int main(int argc, char* argv[])
{
    // informs test-listener about testresults
    CPPUNIT_NS::TestResult testresult;

    // register listener for collecting the test-results
    CPPUNIT_NS::TestResultCollector collectedresults;
    testresult.addListener (&collectedresults);

    // register listener for per-test progress output
    CPPUNIT_NS::BriefTestProgressListener progress;
    testresult.addListener (&progress);

    // insert test-suite at test-runner by registry
    CPPUNIT_NS::TestRunner testrunner;
    testrunner.addTest (CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest ());
    testrunner.run(testresult);

    // output results in compiler-format
    CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults, std::cerr);
    compileroutputter.write ();

    // Output XML for Jenkins CPPunit plugin
    ofstream xmlFileOut("cppCandidateResults.xml");
    XmlOutputter xmlOut(&collectedresults, xmlFileOut);
    xmlOut.write();

    // return 0 if tests were successful
    return collectedresults.wasSuccessful() ? 0 : 1;
}

