#include <stdio.h>
#define SIZE 10

int main() {
	const int b = 3;
	int a[SIZE] = {2, 1, 3, 9, 6, 3, 5, 9, 32, 6};

	printf("Data in its original order: \n");
	for(size_t i = 0; i < SIZE; i++) {
		printf("%4i ", a[i]);
	}

	for (unsigned int pass = 0; pass < SIZE; pass++){
		// Bubble sort (small items slowly go to the top of the array)
		for (size_t i = 0; i < SIZE - 1; i++) {
			// Compare the adjacent elements and swap them if the first is bigger
			if(a[i] > a[i+1]) {
				int hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
			}
		}
	}

	printf("\nData in sorted order: \n");
	for(size_t i = 0; i < SIZE; i++) {
		printf("%4i ", a[i]);
	}

	puts("");
	return 0;
}