#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *s1 = "Ellis";
	char *s2 = "Roy";

	int result = strcmp(s1, s2) > 0;
	printf("%i\n", result);

	return 0;
}