#include <stdio.h>

int main() {
	int value;
	while(scanf("%d", &value)) {
		if(value < 0) {
			break;
		} else if(value % 2 == 0) {
			printf("%d", value);
		}
	}
	return 0;
}