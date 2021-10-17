#include <stdio.h>

void cubeByReference(int *nPtr);

int main() {
	int number = 5;
	cubeByReference(&number);

	printf("The original value: %i\n", number);
	printf("The new value: %i\n", number);

	return 0;
}

void cubeByReference(int *nPtr) {
	*nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}