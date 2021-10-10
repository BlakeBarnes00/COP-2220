#include <stdio.h>

int main() {
	int arr[3] = {1, 2, 3};
	int i, j;

	size_t arr_size = sizeof(arr)/sizeof(arr[0]);
	int tmp_arr[arr_size];
	for(i = 0; i < arr_size; i++) {
		tmp_arr[i] = arr[arr_size - i - 1];
	}

	for(i = 0; i < arr_size; i++) {
		arr[i] = tmp_arr[i];
	}

	for(i = 0; i < arr_size; i++) {
		printf("%i", arr[i]);
	}
	
	return 0;
}