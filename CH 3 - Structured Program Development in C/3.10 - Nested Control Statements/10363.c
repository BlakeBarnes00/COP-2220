#include <stdio.h>

int main() {

	int dupeCounter = 0;
	int input, last = -1;
	while(scanf("%d", &input)) {
		if(input < 0) {
			break;
		} else if(last == input) {
			dupeCounter++;
			printf("dupe count: %d\n", dupeCounter);
		}
		last = input;
		printf("last: %d\n", last);
	}
	printf("%d", dupeCounter);

	return 0;
}