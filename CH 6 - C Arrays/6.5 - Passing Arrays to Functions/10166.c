#include <stdio.h>

int isReverse(int a[], int b[], int size) {
	int matches = 0;
	for(int i = 0; i < size; i++) {
		if(a[i] == b[size - i - 1]) {
			matches++;
		}
	}

	if(matches == size) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int a[] = {1, 2, 3};
	int b[] = {3, 2, 1};

	printf("%i\n", isReverse(a, b, sizeof(a)/sizeof(size_t)));
	return 0;
}