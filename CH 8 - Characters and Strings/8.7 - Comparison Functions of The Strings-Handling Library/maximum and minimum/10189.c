#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *name1 = "Alex";
	char *name2 = "Blake";
	char *first;

	if(strcmp(name1, name2) > 0) {
		first = name1;
	} else {
		first = name2;
	}

	printf("%s\n", first);

	return 0;
}