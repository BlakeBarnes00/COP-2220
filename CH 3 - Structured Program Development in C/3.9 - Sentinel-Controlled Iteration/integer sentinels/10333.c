#include <stdio.h>

int main() {
	int value;
	int sumEvens = 0, sumOdds = 0;
	int evenCount = 0, oddCount = 0;

	while(scanf("%d", &value)) {
		if(value < 0) {
			break;
		} else if(value % 2 == 0) {
			evenCount++;
			sumEvens += value;
		} else if(value % 2 != 0) {
			oddCount++;
			sumOdds += value;
		}
	}
	printf("%d %d %d %d", sumEvens, sumOdds, evenCount, oddCount);

	return 0;
}