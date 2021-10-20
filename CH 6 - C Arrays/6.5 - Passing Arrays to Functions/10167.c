#include <stdio.h>

void reverse(int arr[], int arr_size) {
	int tmp;
	for(int i = 0; i < arr_size/2; i++) {
		tmp = arr[i];
		arr[i] = arr[arr_size - i - 1];
		arr[arr_size - i - 1] = tmp;
	}
}

int main() {
	int a[] = {1, 2, 3, 4, 5, 6};
	reverse(a, 6);

	return 0;
}