#include <stdio.h>
#define SIZE 10

void bubble_sort(int *const array);

int main() {
	int a[SIZE] = {1, 6, 6 ,7, 64, 23, 47, 2, 6, 10};

	printf("Data in original order: \n");
	for(size_t i = 0; i < SIZE; i++) {
		printf("%4i", a[i]);
	}

	printf("\nData in sorted order: \n");
	bubble_sort(a);

	for(size_t i = 0; i < SIZE; i++) {
		printf("%4i", a[i]);
	}

	printf("\n");
	return 0;
}

void bubble_sort(int *const array) {
	void swap(int *element1Ptr, int *element2Ptr);
	size_t size = sizeof(array)/sizeof(int);
	
	// loop to control passes
	for(unsigned int pass = 0; pass < size - 1; pass++) {
		// loop to control comparisons during each pass
		for(size_t j = 0; j < size - 1; j++) {
			// swap adjacent elements if they are out of order
			if(array[j] > array[j+1]) {
				swap(&array[j], &array[j+1]);
			}
		}
	}
}

// Swap values at memory locations to which element1Ptr and element2Ptr point
void swap(int *element1Ptr, int *element2Ptr) {
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}