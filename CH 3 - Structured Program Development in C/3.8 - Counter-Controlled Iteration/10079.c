#include <stdio.h>

// MPL Variables
int n = 12;
int k, total;

int main() {
	
	k = 0;
	total = 0;
	while(k <= n) {
		total = total + (k*k*k);
		k++;
	}
	printf("Sum of cubes: %d\n", total);

	return 0;
}