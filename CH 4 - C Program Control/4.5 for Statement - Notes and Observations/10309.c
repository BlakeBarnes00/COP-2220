#include <stdio.h>

int main() {
	for(int i = 11; i <= 121; i++) {
		if(i % 2 == 1) {
			printf("%i ", i);
		}
	}
	return 0;
}