#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *name1 = "blake";
	char *name2 = "alexx";
	char *name3 = "blake";
	char *max;

	if(strcmp(name1, name2) > 0 && strcmp(name1, name3) > 0) {
		max = name1;
	} else if(strcmp(name2, name1) > 0 && strcmp(name2, name3) > 0) {
		max = name2;
	} else if(strcmp(name3, name1) > 0 && strcmp(name3, name2) > 0) {
		max = name3;
	} else if(strcmp(name1, name2) == 0) {
		max = name1, name2;
	} else if(strcmp(name1, name3) == 0) {
		max = name1, name3;
	} else if(strcmp(name2, name3) == 0) {
		max = name2, name3;
	} else {
		max = name1, name2, name3;
	}
	

	printf("%s\n", max);

	return 0;
}