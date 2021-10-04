#include <stdio.h>

int len(char* string) {
	// See if it is blank
	if(*string == 0) {
		return 0;
	} else {
		// Add one for every character
		return 1 + len(string + 1);
	}
}

int main() {
	char* test = "";
	char* name = "Ellis";
	printf("%s\n", name);
	printf("%i\n", len(name));
	return 0;
}