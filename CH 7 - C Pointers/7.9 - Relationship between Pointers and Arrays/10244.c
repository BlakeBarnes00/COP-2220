#include <stdio.h>

int main() {
	int enrollment[20];
	int *ip;

	enrollment[0] = 1;
	ip = &enrollment[0];
	printf("First element: %i\n", *ip);

	return 0;
}