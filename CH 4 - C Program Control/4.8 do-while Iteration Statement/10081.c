#include <stdio.h>
// MPL 
int n = 10, j;

int main() {
	j = 0;
	do {
		printf("*");
		j++;
	} while (j < n);

	return 0;
}