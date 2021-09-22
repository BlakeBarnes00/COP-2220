#include <stdio.h>

int main() {
	for(unsigned int i = 1; i < 200; i++) {
		if(i % 2 == 0 && i % 3 == 0) {
			printf("%u ", i);
		}
	}

	return 0;
}