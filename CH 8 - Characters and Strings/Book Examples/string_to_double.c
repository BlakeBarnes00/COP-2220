#include <stdio.h>
#include <stdlib.h>

int main(){
	const char *string = "54.2% are admitted.";
	char *stringPtr; // create char pointer

	double d = strtod(string, &stringPtr);

	printf("The string \"%s\" is converted to the \n", string);
	printf("double value %.2f and the string \"%s\"\n", d, stringPtr);
	return 0;
}