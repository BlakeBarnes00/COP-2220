#include <stdio.h>

int main() {
	int value;
	int sumEvens = 0, sumOdds = 0;

	while(scanf("%d", &value)) {
		if(value <= 0) {
			break;
		} else if(value % 2 == 0) {
			sumEvens += value;
		} else if(value % 2 != 0) {
			sumOdds += value;
		}
	}
	printf("%d %d", sumEvens, sumOdds);
	
	return 0;
}