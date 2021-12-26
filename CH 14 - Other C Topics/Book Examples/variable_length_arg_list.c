#include <stdio.h>
#include <stdarg.h>

double average(int i, ...);

int main() {

	double a = 32.14;
	double b = 65464.01;
	double c = 46573.14;
	double d = 7643.10;
	printf("%s%.1f\n%s%.1f\n%s%.1f\n%s%.1f\n", 
		"a = ", a, "b = ", b, "c = ", c, "d = ", d
	);

	printf("%s%.3f\n%s%.3f\n%s%.3f\n",
		"The average of a and b is: ", average(2, a, b),
		"The average of b and c is: ", average(2, b, c),
		"The average of c and d is: ", average(2, c, d)
	);
}

// average
double average(int i, ...) {
	double total = 0;
	
	va_list ap; // stores information needed by va_start and va_end
	va_start(ap, i); // initializes the va_list object

	// process variable-length argument list
	for(int j = 0; j < i; j++) {
		total += va_arg(ap, double);
	}
	va_end(ap); // clean up the arg list
	return total / i;
}