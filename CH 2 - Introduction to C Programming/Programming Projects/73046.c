#include <stdio.h>

int main() {
	int a, b;

	printf("Enter an integer: ");
	scanf("%d", &a);

	printf("Enter another integer: ");
	scanf("%d", &b);

	printf("The sum is: %d\n", a+b);
	printf("The product is: %d\n", a*b);
	printf("The difference is: %d\n", a-b);
	printf("The quotient is: %d\n", a/b);
	printf("The remainder is: %d\n", a%b);

	return 0;
}