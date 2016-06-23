#include <stdio.h>
#include "CuTest.h"
#include "a.h"
#include "test_support.h"

void Test_int_add(CuTest *tc) {
	int input1[2] = {2, 3};
	int input2 = 2;
	int actual = int_add(input1, input2);
	int expected = 5;
	CuAssertIntEquals(tc, expected, actual);
}

void Test_int_pow(CuTest *tc) {
	int input1[2] = {2, 3};
	int input2 = 2;
	int actual = int_pow(input1, input2);
	int expected = 6;
	CuAssertIntEquals(tc, expected, actual);
}

void Test_my_sqrt(CuTest *tc) {
	double input = 2;
	double actual = my_sqrt(input);
	double expected = 1.41421356;
	CuAssertTrue(tc, double_equal(expected, actual));
}

void Test_factorial5(CuTest *tc) {
	int input = 5;
	double actual = factorial(input);
	double expected = 120;
	CuAssertTrue(tc, double_equal(expected, actual));
}

void Test_factorial1(CuTest *tc) {
	int input = 1;
	double actual = factorial(input);
	double expected = 1;
	CuAssertTrue(tc, double_equal(expected, actual));
}

void Test_factorial0(CuTest *tc) {
	int input = 0;
	double actual = factorial(input);
	double expected = 1;
	CuAssertTrue(tc, double_equal(expected, actual));
}

void Test_int_power(CuTest *tc) {
	double input1 = 1.41421356;
	int input2 = 10;
	double actual = int_power(input1, input2);
	double expected = 32;
	CuAssertTrue(tc, double_equal(expected, actual));
}

void Test_my_sin1(CuTest *tc) {
	double input = 1.57079632675;
	double actual = my_sin(input);
	double expected = 1;
	CuAssertTrue(tc, double_equal(expected, actual));
}

void Test_my_sin0(CuTest *tc) {
	double input = 3.1415926535;
	double actual = my_sin(input) + 1;
	double expected = 1;
	CuAssertTrue(tc, double_equal(expected, actual));
}

void Test_my_napier(CuTest *tc) {
	double actual = my_napier();
	double expected = 2.7182818284;
	CuAssertTrue(tc, double_equal(expected, actual));
}

void Test_my_lna(CuTest *tc) {
	double input = 2;
	double actual = my_lna(input);
	double expected = 0.69314718055;
	CuAssertTrue(tc, double_equal(expected, actual));
}


void Test_my_ln(CuTest *tc) {
	double input = 3;
	double actual = my_ln(input);
	double expected = 1.09861228867;
	CuAssertTrue(tc, double_equal(expected, actual));
}

CuSuite* SampleTestSuite() {
	CuSuite* s = CuSuiteNew();
	SAD(s, Test_int_add);
	SAD(s, Test_int_pow);
	SAD(s, Test_my_sqrt);
	SAD(s, Test_factorial5);
	SAD(s, Test_factorial1);
	SAD(s, Test_factorial0);
	SAD(s, Test_int_power);
	SAD(s, Test_my_sin1);
	SAD(s, Test_my_sin0);
	SAD(s, Test_my_napier);
	SAD(s, Test_my_lna);
	SAD(s, Test_my_ln);
	return s;
}
