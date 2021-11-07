/*
	9.10 (Temperature Conversions)
	Write a program that converts integer Fahrenheit temperatures from 0 to 212 degrees to
	floating-point Celsius temperatures with 3 digits of precision. Perform the calculation
	using the formula celsius = 5.0 / 9.0 * (fahrenheit - 32). The output should be printed
	in two right-justified columns of 10 characters each, and the Celsius temperatures
	should be preceded by a sign for both positive and negative values.
*/

#include <stdio.h>

float convert_to_celsius(int f) {
	return (5.0 / 9.0) * (f - 32);
}

int main() {
	for(unsigned int i = 0; i <= 212; i++) {
		printf("%10i%+10.3f\n", i, convert_to_celsius(i));
	}
	return 0;
}