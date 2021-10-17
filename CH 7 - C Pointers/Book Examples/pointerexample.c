#include <stdio.h>

int main() {
	int a = 7, *aPtr = &a;

	printf("The adress of a is %p"
			"\nThe value of aPtr is %p\n", &a, aPtr);
	
	printf("\nThe value of a is %i"
			"\nThe value of *aPtr is %i\n", a, *aPtr);
	
	printf("\nShowing that * and & are complements of eachother"
			"\n&*aPtr = %p"
			"\n*&aPtr = %p\n", &*aPtr, *&aPtr);

	return 0;
}