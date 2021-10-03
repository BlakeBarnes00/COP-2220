#include <stdio.h>

int getMin(int a, int b) {
	if(a < b)
		return a;
	else 
		return b;
}

int main() {
	int x = 12, y = 24, z = 3;

	int min = getMin(x, y);
	min = getMin(min, z);

	printf("%i", min);

	return 0;
}