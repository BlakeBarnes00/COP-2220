#include <stdio.h>

int main() {
	int enrollment[20];
	int *ip;

	enrollment[0] = 42;
	enrollment[19] = 69;


	ip = enrollment + 20;

	printf("First element: %i\n", *ip);

	return 0;
}