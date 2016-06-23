#include <stdio.h>
#include "CuTest.h"
#include "a.h"
#define SAD SUITE_ADD_TEST

int double_equal(double a, double b) {
	/*
	a == b == 0 の判定はできない！！
	*/
	double e1 = a / 1000;
	double e2 = b / 1000;
	double d = a - b;
	if(e1 < 0) e1 *= -1;
	if(e2 < 0) e2 *= -1;
	if(d < 0) d *= -1;
	return (d < (e1 < e2 ? e1 : e2));
}

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
	SAD(s, Test_double_equal1);
	SAD(s, Test_double_equal2);
	SAD(s, Test_double_equal3);
	return s;
}
