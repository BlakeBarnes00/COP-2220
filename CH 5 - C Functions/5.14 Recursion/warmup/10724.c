#include <stdio.h>

void printStars(int starCount) {
	if(starCount > 0) {
		printf("*");
		printStars(starCount-1);
	}
}

int main() {
	printStars(10);
	return 0;
}