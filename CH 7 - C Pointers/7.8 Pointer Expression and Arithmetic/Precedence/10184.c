#include <stdio.h>

int main() {
	int x = 5, y = 0;
	
	int *ip = &x;
	y = *(ip + 1); // Get the value after the address of ip

	printf("value: %i\n"
			"value: %i\n", x, y);

	return 0;
}