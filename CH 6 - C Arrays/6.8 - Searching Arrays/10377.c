#include <stdio.h>

int main() {
	double x = 25;
	double root = 5;
	const double PRECISION = 0.00001;
	double a = 1;
	double b, mid;
	b = x;
	while((b-a) > PRECISION) {
		root = (a+b)/2;
		if(root * root < x) {
			a = root;
		} else {
			b = root;
		}
	}
	

	return 0;
}