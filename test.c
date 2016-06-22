#include <stdio.h>
#include "CuTest.h"

int int_add(int x[], int n);

void Test_int_add(CuTest *tc) {
	int input[2] = {2, 3};
	int actual = int_add(input, 2);
	int expected = 5;
	CuAssertIntEquals(tc, expected, actual);
}

CuSuite* StrUtilGetSuite() {
	CuSuite* suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, Test_int_add);
	return suite;
}
