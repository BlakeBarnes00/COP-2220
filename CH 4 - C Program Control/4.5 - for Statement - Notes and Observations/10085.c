#include <stdio.h>

int i, result = 0; 
int lo = 0, hi = 5;

int main() {
	for(i = lo; i <= hi; i++) {
		result += i;
	}

	printf("%u", result);
	return 0;
}