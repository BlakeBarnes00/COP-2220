// This works on my PC but MPL does not accept it, I email my professor, she said it is fine.

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main() {
	char *s;
	char input[5];
	do {
		fgets(input, 5, stdin);
		s = input;
		s[strlen(input) - 1] = 0;

		if(strcmp(s, "y") == 0 || strcmp(s, "Y") == 0 || strcmp(s, "N") == 0 || strcmp(s, "n") == 0) {
			break;
		}
	} while(1);

	return 0;
}