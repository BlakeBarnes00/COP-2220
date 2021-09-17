#include <stdio.h>

// Variables from MPL
int k, total = 0;

int main() {

	k = 0;
	while(k <= 50) {
		total = total + (k*k);
		k++;
	}
	printf("%d", total);

	return 0;
}