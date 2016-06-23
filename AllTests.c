#include <stdio.h>
#include <string.h>
#include "CuTest.h"

CuSuite* SampleTestSuite();
CuSuite* TestSupportTestSuite();

int RunAllTests(void)
{
	CuString *output = CuStringNew();
	CuSuite* suite = CuSuiteNew();

	CuSuiteAddSuite(suite, TestSupportTestSuite());
	CuSuiteAddSuite(suite, SampleTestSuite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("%s\n", output->buffer);
	if(strstr(output->buffer, "OK") != NULL) {
		return 0;
	}
	else {
		return 1;
	}
}

int main(void)
{
	return RunAllTests();
}
