#include <stdio.h>

int main() {
	for(int i = 5; i < 175; i++){
		if(i % 5 == 0) {
			printf("%i ", i);
		}
	}
	return 0;
}