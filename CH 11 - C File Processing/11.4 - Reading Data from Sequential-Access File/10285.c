#include <stdio.h>

int main() {
	FILE *f; // file pointer

	if((f = fopen("greeting", "w")) == NULL) {
		printf("ERROR OPENING FILE\n");
	} else {
		fprintf(f, "hey!");
	}
	fclose(f);

	return 0;
}