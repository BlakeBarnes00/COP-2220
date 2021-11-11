#include <stdio.h>

void displayBits(unsigned int value);

int main() {
	unsigned int x;

	printf("Enter a nonnegative int: ");
	scanf("%u", &x);
	displayBits(x);

	return 0;
}

void displayBits(unsigned int value) {
	// define displayMask and left shift 31 bits
	unsigned int displayMask = 1 << 31;
	printf("%10u = ", value);

	// loop through bits
	for(unsigned int c = 1; c <= 32; c++) {
		putchar(value & displayMask ? '1' : '0');
		value <<= 1; // shift value left by one 

		// output a space after 8 bits
		if(c % 8 == 0) {
			putchar(' ');
		}
	}

	putchar('\n');
}