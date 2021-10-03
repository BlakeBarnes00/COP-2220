#include <stdio.h>

double harmonic(int n) {
	if(n == 0) {
		return 0;
	} else {
		return (1.0 / n) + harmonic(n-1); 
	}
}

int main() {
	printf("%ld", harmonic(3));
	return 0;
}