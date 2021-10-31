#include <stdio.h>
#include <string.h>

#define SIZE1 25
#define SIZE2 15

int main() {
	char x[] = "Happy Birthday to You.";
	char y[SIZE1];
	char z[SIZE2];

	// Copy contents of x into y
	printf("%s%s\n%s%s\n",
		"The string in array x is: ", x,
		"The string in array y is: ", strcpy(y, x)
	);

	// Copy first 14 characters of x into z. Does not copy null character
	strncpy(z, x, SIZE2 - 1);

	z[SIZE2 - 1] = '\0'; // Terminate string in z
	printf("The string in array z is: %s\n", z);

	return 0;
}