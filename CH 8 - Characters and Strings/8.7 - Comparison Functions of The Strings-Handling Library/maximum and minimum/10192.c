#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *min(char *a, char *b, char *c) {
	if(strcmp(a, b) < 0 && strcmp(a, c) < 0) {
		return a;
	} if(strcmp(b, a) < 0 && strcmp(b, c) < 0) {
		return b;
	} if(strcmp(c, a) < 0 && strcmp(c, b) < 0) {
		return c;
	} else {
		return a, b, c;
	}
}

int main() {
	printf("%s\n", min("a", "b", "c"));
	return 0;
}