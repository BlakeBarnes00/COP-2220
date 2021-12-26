#include <stdio.h>

#define CIRCLE_AREA(x) ((3.145) * (x) * (x))
#define RECTANGLE_AREA(x, y) ((x)*(y))

int main() {
	double area = RECTANGLE_AREA(5,5);
	printf("%f\n", area);

	return 0;
}