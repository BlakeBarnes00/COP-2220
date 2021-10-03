#include <stdio.h>

unsigned long long int factorial(unsigned int number) {
	// Base case
	if(number <= 1) {
		return number;
	} else {
		return (number * factorial(number - 1));
	}
}