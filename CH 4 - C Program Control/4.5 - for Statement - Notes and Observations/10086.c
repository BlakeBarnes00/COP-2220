#include <stdio.h>

int i, j;
int n = 5;

int main() {
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}