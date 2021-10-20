#include <stdio.h>

int main() {
	for(int i = 80; i >= 20; i--) {
		if(i % 2 == 0) {
			printf("%i ", i);
		}
	}
	return 0;
}