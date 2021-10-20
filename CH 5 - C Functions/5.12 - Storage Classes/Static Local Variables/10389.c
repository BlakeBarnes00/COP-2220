#include <stdio.h>

int counter() {
	static int count = 0;
	return count++;
}

int main() {
	printf("%i\n", counter());
	printf("%i\n", counter());
	printf("%i\n", counter());
	return 0;
}