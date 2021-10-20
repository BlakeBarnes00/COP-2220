#include <stdio.h>
#include "fib.h"

int main() {
	unsigned int number;
	printf("Enter an integer: ");
	scanf("%u", &number);
	
	unsigned long long int result = fib(number);
	printf("Fibonacci(%u) = %llu\n", number, fib(number));

	return 0;
}