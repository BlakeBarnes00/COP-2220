#include <stdio.h>

int main() {
	int value;
	int sum = 0;

	while(scanf("%d", &value)) {
		if(value < 0) {
			break;
		} else if(value % 2 == 0) {
			sum += value;
		}
	}
	printf("%d", sum);

	return 0;
}