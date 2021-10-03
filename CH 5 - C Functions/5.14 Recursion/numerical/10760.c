long fact(int x) {
	if(x < 1) {
		return 1;
	} else {
		return fact(x - 1) * x;
	}
}