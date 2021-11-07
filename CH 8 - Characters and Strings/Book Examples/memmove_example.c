#include <stdio.h>
#include <string.h>

int main() {
	char x[] = "Home Sweet Home";
	printf("%s%s\n", "The string in array x before memmove: ", x);
	
	(char *) memmove(x, &x[5], 10);
	printf("%s%s\n", "The string in array x after memmove: ", x);
	return 0;
}