#include <stdio.h>

long power(int x, int n) {
	if(n == 0) {
		return 1;
	} 
	return x * power(x, n-1);
}

int main() {
	printf("%ld", power(3,2));
	return 0;
}