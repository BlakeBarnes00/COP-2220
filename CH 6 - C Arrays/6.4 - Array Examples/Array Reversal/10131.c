#include <stdio.h>

int main() {
	int n = 5, k = 0;
	int a[n];
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;
	
	int temp;
	for(k = 0; k < n/2; k++) {
		temp = a[k];
		a[k] = a[n - k - 1];
		a[n - k - 1] = temp;
	}

	for(int i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}

	return 0;
}