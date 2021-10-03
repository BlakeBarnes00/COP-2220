#include <stdio.h>
#include <stdbool.h>

int main() {
	int seq_size, sum = 0;

	printf("Enter sequence size: ");
	scanf("%i", &seq_size);

	// Create an array the size of seq_size
	int sequence[seq_size];

	int i = 0;
	while(i < seq_size) {
		printf("Enter your value: ");
		scanf("%i", &sequence[i]);
		sum += sequence[i];
		i++;
	}

	// Just to print out the array for fun
	// for(int i = 0; i < (sizeof(sequence)/sizeof(int)); i++) {
	// 	printf("sequence[%i] = %i\n", i, sequence[i]);
	// }

	printf("The sum of the sequence is: %i\n", sum);

	return 0;
}