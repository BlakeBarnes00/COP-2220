#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n = 0; // SINGLETON count
	char prev[] = "xxxxx", curr[8], next[8];
	scanf("%c", &curr);

	while(strcmp(next, "xxxxx") != 0) {
		scanf("%c", &next);
		if(strcmp(prev, curr) != 0 && strcmp(curr, next) != 0) {
			n++;
		}

		strcpy(prev, curr);
		strcpy(curr, next);
	}

	printf("Singletons: %u\n", n);

	return 0;
}