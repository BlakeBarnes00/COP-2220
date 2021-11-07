#include <stdio.h>
#include <string.h>

int main() {
	char string[10] = "AAAAAAAAAA";
	printf("%s\n", string);

	(char *) memset(string, 'a', 6);
	printf("%s\n", string);
	return 0;
}