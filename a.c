

int int_add(int x[], int n) {
	int i, ret;
	ret = 0;
	for(i = 0; i < n; i++)
		ret += x[i];
	return ret;
}
