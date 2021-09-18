#include <stdio.h>

int main() {
	int value;
	int evenSum = 0, oddSum = 0;

	while(value >= 0) {
		if(value % 2 == 0) {
			evenSum += value;
		} else {
			oddSum += value;
		}
		
		scanf("%d", &value);
	}

	printf("%d %d", evenSum, oddSum);

	return 0;
}