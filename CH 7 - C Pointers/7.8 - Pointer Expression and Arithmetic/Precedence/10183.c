#include <stdio.h>

int main() {
	int x = 5, y = 0;
	
	int *ip = &x;
	y = *ip + 1; // add one to the value at the adress p is pointing to.

	printf("value: %i\n"
			"value: %i\n", x, y);

	return 0;
}