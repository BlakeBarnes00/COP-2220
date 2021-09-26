#include <stdio.h>

int sum = 0, num;

int main() {
	
	for(num = 0; num <= 500; num += 5) {
		sum += num;
	}
	printf("%i", sum);

	return 0;
}
