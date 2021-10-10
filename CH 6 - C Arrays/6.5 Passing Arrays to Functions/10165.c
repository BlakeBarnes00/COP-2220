#include <stdio.h>

int sumArray(int arr[], int n) {
	int sum = 0;
	for(size_t i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {

	int nums[] = {1, 2, 3, 8};
	printf("%i", sumArray(nums, sizeof(nums)/sizeof(size_t)));
}