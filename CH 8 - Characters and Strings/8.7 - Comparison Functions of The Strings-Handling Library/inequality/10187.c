#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *lastName = "Barnes";
	
	int result = strcmp(lastName, "Dexter") > 0;
	printf("%i\n", result);

	return 0;
}