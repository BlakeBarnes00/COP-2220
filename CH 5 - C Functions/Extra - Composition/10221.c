#include <stdio.h>
#include <math.h>

//MPL Variables
double x = 16;

double quadratic_root(double num) {
	return sqrt(sqrt(num));	
}

int main() {
	printf("%.2lf\n", quadratic_root(x));
	return 0;
}