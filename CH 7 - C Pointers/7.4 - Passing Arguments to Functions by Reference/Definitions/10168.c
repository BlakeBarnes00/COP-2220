#include <stdio.h>

void zeroIt(int *x) {
	*x = 0;
}

int main() {
	int number;
	printf("Enter a number: ");
	scanf("%i", &number);
	zeroIt(&number);
	printf("The value of number: %i\n", number);

	return 0;
}