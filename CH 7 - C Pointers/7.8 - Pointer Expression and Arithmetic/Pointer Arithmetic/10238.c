#include <stdio.h>

int main() {
	int array[100];
	array[15] = 200;
	array[16] = 56;
	
	int *ip = &array[15];
	int *jp = ip + 1; // Points to the next value in the array that ip is pointing to.

	// Print the address and the corresponding value
	printf("ip: %p %8.8i\n", ip, *ip);
	printf("jp: %p %8.8i\n", jp, *jp); 

	return 0;
}