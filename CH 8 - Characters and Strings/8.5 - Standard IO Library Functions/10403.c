#include <stdio.h>
#include <string.h>

int main() {
	int duck_count = 0;
	char input[8];
	do {
		scanf("%8s", input);
		if(strstr(input, "duck")) {
			duck_count += 1;
		}
	} while(strcmp(input, "goose"));

	printf("%u\n", duck_count);

	return 0;
}