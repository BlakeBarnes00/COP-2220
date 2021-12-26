#include <stdio.h>

#define GET_SMALLEST(a, b) ((a < b) ? (a) : (b))

int main() {
	int a, b, c;
	printf("Enter a number: ");
	scanf("%i", &a);

	printf("Enter a second number: ");
	scanf("%i", &b);

	int smallest = GET_SMALLEST(a, b);
	
	printf("Enter a third number: ");
	scanf("%i", &c);
	smallest = GET_SMALLEST(smallest, c);

	printf("The smallest among the three numbers is: %i\n", smallest);

	return 0;
}