#include <stdio.h>

int main() {
	int counter = 0, largest = 0;
	int number;

	while(counter < 10) {
		printf("Enter a non-negative integer number: ");
		scanf("%i", &number);

		if(number > largest){
			largest = number;
		}

		counter++;
	}

	printf("The largest number entered was: %i", largest);

	return 10;
}