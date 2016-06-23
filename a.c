int int_add(int x[], int n) {
	int i, ret;
	ret = 0;
	for(i = 0; i < n; i++)
		ret += x[i];
	return ret;
}

int int_pow(int x[], int n) {
	int i, ret;
	ret = 1;
	for(i = 0; i < n; i++)
		ret *= x[i];
	return ret;
}

double my_sqrt(double x) {
	int i;
	double ret;
	ret = 1;
	for(i = 0; i < 100; i++)
		ret = ret - (ret * ret - x) / (2 * ret);
	return ret;
}

double factorial(int a) {
	int i;
	double ret = 1;
	for(i = 1; i <= a; i++)
		ret *= i;
	return ret;
}

double int_power(double a, int n) {
	int i;
	double ret = 1;
	for(i = 0; i < n; i++)
		ret *= a;
	return ret;
}

double my_sin(double x) {
	int i;
	double ret = 0;
	for(i = 0; i < 100; i++) 
		ret += (int_power(x, 2*i+1) / factorial(2*i+1) * int_power(-1, i%2));
	return ret;
}
