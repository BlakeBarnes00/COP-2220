#include <stdio.h>
#include <string.h>

int main() {
	const char *str1 = "This is a test";
	const char *str2 = "beware";
	
	printf("%s\"%s\"\n'%c'%s\n\"%s\"\n",
		"Of the characters in ", str2,
		*strpbrk(str1, str2), 
		" appears earliest in ", str1
	);
	
	return 0;
}