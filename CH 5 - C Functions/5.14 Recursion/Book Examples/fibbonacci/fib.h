unsigned long long fib(unsigned int n) {
	if(n == 0 || n == 1) {
		return n;
	} else {
		return fib(n - 1) + fib(n - 2);
	}
}