#include <stdio.h>

int main() {
	int value;
	printf("Enter an integer: ");
	scanf("%i", &value);

	printf("The original value is: %i\n", value);
	printf("Now, using postdecrement, the printed is: %i\n", value--);
	printf("But the current value after printing is: %i\n", value);
	printf("Now, using predecrement, the value printed is: %i\n", --value);
	printf("The current value after printing is still: %i\n", value);

	return 0;
}