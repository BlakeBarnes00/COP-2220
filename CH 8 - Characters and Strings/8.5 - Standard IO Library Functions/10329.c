#include <stdio.h>

int main() {
	int k;
	double d;
	char s[10];

	// Read in an integer
	scanf("%i %lf %s", &k, &d, &s);

	// Print in the result in reverse order
	printf("%s %lf %i\n%i %lf %s\n", s, d, k, k, d, s);

	return 0;
}