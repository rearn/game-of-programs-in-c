#include <stdio.h>

#include "CuTest.h"

//CuSuite* CuGetSuite();
//CuSuite* CuStringGetSuite();
CuSuite* StrUtilGetSuite();

void RunAllTests(void)
{
	CuString *output = CuStringNew();
	CuSuite* suite = CuSuiteNew();

//	CuSuiteAddSuite(suite, CuGetSuite());
//	CuSuiteAddSuite(suite, CuStringGetSuite());
	CuSuiteAddSuite(suite, StrUtilGetSuite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("%s\n", output->buffer);
}

int main(void)
{
	RunAllTests();
}
