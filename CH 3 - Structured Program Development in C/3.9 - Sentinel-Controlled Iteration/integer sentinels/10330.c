#include <stdio.h>
#include <stdbool.h> // in MPL replace 'true' with 1

int main() {
	int value;
	int evenTotal = 0, oddTotal = 0;

	while(true) {
		scanf("%i", &value);
		if(value < 0) {
			printf("%i %i", evenTotal, oddTotal);
			break;
		} else if(value % 2 == 0) {
			evenTotal += value;
		} else if(value % 2 == 1) {
			oddTotal += value;
		}
	}
	return 0;
}