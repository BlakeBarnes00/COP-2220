/*
	9.9 (Rounding Floating-Point Numbers)
	Write a program that prints the value 100.453627 rounded to the nearest digit,
	tenth, hundredth, thousandth and ten-thousandth.
*/

#include <stdio.h>

int main() {
	float x = 100.453627;

	printf("%.0f\n", x);
	printf("%.1f\n", x);
	printf("%.2f\n", x);
	printf("%.3f\n", x);
	printf("%.4f\n", x);
	
	return 0;
}