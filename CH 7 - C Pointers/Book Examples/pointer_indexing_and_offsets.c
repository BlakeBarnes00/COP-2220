#include <stdio.h>
#define ARRAY_SIZE 4

int main() {
	int b[ARRAY_SIZE] = {10, 20, 30, 40};
	int *bPtr = b; // Point to the array 'b'

	printf("Array b printed with: Array index notation\n");
	for(size_t i = 0; i < ARRAY_SIZE; i++) {
		printf("\tb[%i] = %i\n", i, b[i]);
	}

	// Print using name and pointer/offset notation
	printf("\n\nPointer/offset notation where the pointer is the array name.\n");
	for(size_t offset = 0; offset < ARRAY_SIZE; offset++) {
		printf("\t*(b + %i) = %i\n", offset, *(b + offset));
	}

	printf("\n");
	return 0;
}