#include <stdio.h>

// MPL
int n = 10000;
int k, total;

int main() {
	k = total = 0;

	do{
		total += k*k*k;
		k++;
	} while(k <= n);
	
	printf("%i", total);
	return 0;
}