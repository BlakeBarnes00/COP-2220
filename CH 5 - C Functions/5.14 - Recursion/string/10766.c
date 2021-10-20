#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int containsVowel(char* str) {
	if(*str == 0) {
		return 0;
	} else if(str[0] == 'A' || str[0] == 'E' || str[0] == 'I' ||str[0] == 'O' ||str[0] == 'U' || 
				str[0] == 'a' || str[0] == 'e' || str[0] == 'i' ||str[0] == 'o' ||str[0] == 'u') {
		return 1;
	} else {
		containsVowel(str + 1);
	}
}

int main() {
	char* name = "Ellis";

	printf("%s\n", name);
	printf("%i\n", containsVowel(name));
	
	return 0;
}