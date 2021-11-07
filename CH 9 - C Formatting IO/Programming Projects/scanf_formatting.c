/*
	9.7 (Differences Between %d and %i)
	Write a program to test the difference between the %d and %i conversion specifiers when
	used in scanf statements. Ask the user to enter two integers separated by a space.

	Use the statements

	scanf("%i %d", &x, &y);
	printf("%d %d\n", x, y);

	to input and print the values. Test the program with the following sets of input data:

	10 10
	-10 -10
	010 010
	0x10 0x10
*/

#include <stdio.h>

int main() {

	printf("Enter two integers: ");
	int x, y;
	scanf("%i %d", &x, &y);
	printf("%d %d\n", x, y);

	return 0;
}