#include <stdio.h>

int main() {
	// Triangle A
	printf("A\n");
	for(int i = 1; i <= 10; i++) {
		for(int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	// Triangle B
	printf("B\n");
	for(int i = 0; i <= 10; i++) {
		for(int j = 10; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	// Triangle D
	printf("D\n");
	for(int i = 0; i < 10; i++) {
		for(int j = 10; j >= i; j--) {
			printf(" ");
		}
		for(int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}