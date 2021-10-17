#include <stdio.h>

int main() {
	int counter = 1, *counterPointer;
	counterPointer = &counter;
	printf("Counter: %i %p\n", counter, counterPointer);
	return 0;
}