#include <stdio.h>

void minMax(int a, int b, int c, int *big, int *small) {
	*big = *small = a;
	if(b < *small) {
		*small = b;
	} 
	
	if(c < *small) {
		*small = c;
	}

	if(b > *big) {
		*big = b;
	} 
	
	if(c > *big) {
		*big = c;
	}
}

int main() {
	int a = 31, b = 5, c = 19, big, small;

	minMax(a, b, c, &big, &small);
	printf("big: %i"
			"\nsmall: %i\n", big, small);
	
	return 0;
}