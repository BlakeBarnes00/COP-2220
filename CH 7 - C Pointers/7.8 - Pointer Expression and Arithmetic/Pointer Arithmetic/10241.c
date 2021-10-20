#include <stdio.h>

int main() {
	int array[100];
	array[15] = 10;
	array[20] = 32;
	
	int *ip = &array[15], *jp;
	jp = ip + 5; // The value five elements away from ip
	
	// Print the address and the corresponding value
	printf("ip: %p %i\n", ip, *ip);
	printf("jp: %p %i\n", jp, *jp);

	// Dereference the value that is 5 elements away from ip and print its as an integer
	printf("The value that jp points to: %i\n", *(ip + 5));

	return 0;
}