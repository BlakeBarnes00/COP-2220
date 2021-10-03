#include <stdio.h>

void printStars(int starCount) {
	if(starCount > 0) {
		printf("*");
		printStars(starCount-1);
	}
}

void printTriangle(int n) {
	if(n > 0) {
		printStars(n);
		printf("\n");
		printTriangle(n-1);
	}
}

int main() {
	printTriangle(5);
	return 0;
}