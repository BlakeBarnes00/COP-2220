#include <stdio.h>
#include <string.h>

int main() {
	char string[] = "This is a sentence with 7 tokens";

	printf("%s\n%s\n\n%s\n",
		"The string to be tokenized is: ", string,
		"The tokens are:"
	);

	// After every space create a new token
	char *tokenPtr = strtok(string, " ");
	while(tokenPtr != NULL) {
		printf("%s\n", tokenPtr);
		tokenPtr = strtok(NULL, " "); // Get the next token
	}

	return 0;
}