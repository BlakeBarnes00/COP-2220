#include <stdio.h>
#include <string.h>

int main() {
	char s1[17] = {0};
	char *s2 = "Ellis Barnes";

	printf("s1 before memcpy: %s\n", s1);
	memcpy(s1, s2, 17);

	printf("s1: %s\ns2: %s\n", s1, s2);
	
	return 0;
}