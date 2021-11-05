#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *max(char *s1, char *s2) {
	if(strcmp(s1, s2) > 0) {
		return s1;
	} else if(strcmp(s2, s1) > 0) {
		return s2;
	} else {
		return s1, s2;
	}
}

int main() {
	printf("%s\n", max("aba", "b"));
	return 0;
}