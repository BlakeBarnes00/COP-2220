#include <stdio.h>
#include "factorial.h"

int main(void) {
	// Calculate during each iteration using factorial(i)
	for(unsigned int i = 0; i <= 5; i++) {
		printf("%u! = %llu\n", i, factorial(i));
	}
}