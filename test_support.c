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
