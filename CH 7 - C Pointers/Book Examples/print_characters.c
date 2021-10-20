#include <stdio.h>

void printCharacters(const char *pStr);

int main() {
	char string[] = "Ellis";

	printf("The string is: %s\n", string);
	printCharacters(string);
	printCharacters("\n");

	return 0;
}

void printCharacters(const char *pStr) {
	for(; *pStr != '\0'; pStr++) {
		printf("%c", *pStr);
	}
}