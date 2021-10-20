#include <stdlib.h>
#include <stdio.h>

int main() {
	unsigned int seed;
	printf("Enter seed: ");
	scanf("%u", &seed);
	srand(seed);

	for(unsigned int i = 1; i <= 25; i++) {
		printf("%10i", 1 +(rand() % __INT64_MAX__)); // Random number 1 - 6

		if(i % 5 == 0){
			printf("\n");
		}
	}

	return 0;
}