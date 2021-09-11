#include <stdio.h>

int main() {
	int var;
	printf("Enter an integer to determine its parity: ");
	scanf("%d", &var);

	if(var % 2 == 0) {
		printf("The integer %d is even.", var);
	} else {
		printf("The integer %d is odd.", var);
	}

	return 0;
}