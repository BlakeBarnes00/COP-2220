#include <stdio.h>

int main() {
	int value;

	while(scanf("%d", &value) > 0) {
		if(value > 100) {
			printf("%d ", value);
		}
	}

	return 0;
}