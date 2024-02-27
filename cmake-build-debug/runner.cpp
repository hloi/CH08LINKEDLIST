/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_newCxxTest_init = false;
#include "..\newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "C:/Users/hloi/CLionProjects/CSC109/SP24/CH08LINKEDLIST/newCxxTest.h", 27, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMyFunction() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 33, "testMyFunction" ) {}
 void runTest() { suite_newCxxTest.testMyFunction(); }
} testDescription_suite_newCxxTest_testMyFunction;

static class TestDescription_suite_newCxxTest_testLessOp : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testLessOp() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 82, "testLessOp" ) {}
 void runTest() { suite_newCxxTest.testLessOp(); }
} testDescription_suite_newCxxTest_testLessOp;

static class TestDescription_suite_newCxxTest_testOpAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testOpAssignment() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 105, "testOpAssignment" ) {}
 void runTest() { suite_newCxxTest.testOpAssignment(); }
} testDescription_suite_newCxxTest_testOpAssignment;

static class TestDescription_suite_newCxxTest_testCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testCopyConstructor() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 131, "testCopyConstructor" ) {}
 void runTest() { suite_newCxxTest.testCopyConstructor(); }
} testDescription_suite_newCxxTest_testCopyConstructor;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
