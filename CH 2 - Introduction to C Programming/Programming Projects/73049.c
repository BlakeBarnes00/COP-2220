#include <stdio.h>

int main() {
	int var;

	printf("Enter a 5 digit integer: ");
	scanf("%d", &var);

	// Put the values as a string to navigate easier
	char varStr[5];
	sprintf(varStr, "%d", var);
	printf("%c   %c   %c   %c   %c\n", varStr[0], varStr[1], varStr[2], varStr[3], varStr[4]);

	
	return 0;
}