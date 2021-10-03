#include <stdio.h>
#include <math.h>

double powerTo(double x, int y) {
	if(y < 0) {
		return 0;
	} else {
		return pow(x, y);
	}
}

int main() {
	printf("%lf\n", powerTo(2, 3));
	return 0;
}