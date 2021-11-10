#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main() {
	char *s;
	char input[5];
	do {
		scanf("%5s", input);
		s = input;
		if(strstr(input, "Y") || strstr(input, "N") ||
			strstr(input, "y") || strstr(input, "n")) {
			break;
		}
	} while(1);

	return 0;
}