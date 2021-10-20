#include <stdio.h>

// MPL
int k, total;

int main() {
	k = total = 0;

	do{
		total += k*k;
		k++;
	} while(k <= 50);
	
	printf("%i", total);
	return 0;
}