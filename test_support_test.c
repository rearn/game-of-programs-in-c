#include <stdio.h>
#include "CuTest.h"
#include "test_support.h"

void Test_double_equal1(CuTest *tc) {
	double a = 3.1415;
	double b = 3.1414;
	CuAssertTrue(tc, double_equal(a, b));
}

void Test_double_equal2(CuTest *tc) {
	double a = 3.1415;
	double b = 3.1490;
	CuAssertTrue(tc, !double_equal(a, b));
}

void Test_double_equal3(CuTest *tc) {
	double a = 0.0031415;
	double b = 0.0031490;
	CuAssertTrue(tc, !double_equal(a, b));
}

CuSuite* TestSupportTestSuite() {
	CuSuite* s = CuSuiteNew();
	SAD(s, Test_double_equal1);
	SAD(s, Test_double_equal2);
	SAD(s, Test_double_equal3);
	return s;
}
