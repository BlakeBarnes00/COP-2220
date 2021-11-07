/*
	9.17 (Using %g with Various Precisions)
	Write a program that uses the conversion specifier g to output the value 9876.12345.
	Print the value with precisions ranging from 1 to 9.
*/

#include <stdio.h>

int main() {
	double x = 9876.12345;

	printf("%.0g\n", x);
	printf("%.2g\n", x);
	printf("%.3g\n", x);
	printf("%.4g\n", x);
	printf("%.5g\n", x);
	printf("%.6g\n", x);
	printf("%.7g\n", x);
	printf("%.8g\n", x);
	printf("%.9g\n", x);
	
	return 0;
}