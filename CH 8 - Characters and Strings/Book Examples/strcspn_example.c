#include <stdio.h>
#include <string.h>

int main() {
	const char *string1 = "the value is 2.312";
	const char *string2 = "132456789";

	printf("%s%s\n%s%s\n\n%s\n%s%u\n",
		"string1 = ", string1,
		"string2 = ", string2,
		"The length of the initial segment of string1", 
		"containing no characters from string2 = ", strcspn(string1, string2)
	);
	
	return 0;
}