#include <stdio.h>

int main() {
	int var;
	scanf("%d", &var);
	
	int varDoubled = var * 2;
	int varSquared = var * var;

	printf("%d %d %d", var, varDoubled, varSquared);
	return 0;
}