#include <stdio.h>
#include <string.h>

int main() {
	char s1[20] = "Happy ";
	char s2[] = "New Year ";
	char s3[40] = ""; // Initialize an empty array

	printf("s1 = %s\ns2 = %s\n", s1, s2);

	// Concatenate s2 to s1
	printf("strcat(s1, s2) = %s\n", strcat(s1, s2));

	// Concatenate first 6 characters of s1 to s3. Place '\0'
	// after the last character
	printf("strncat(s3, s1, 6) = %s\n", strncat(s3, s1, 6));

	// Concatenate s2 to s3
	printf("strcat(s3, s1) = %s\n", strcat(s3, s1));

	return 0;
}