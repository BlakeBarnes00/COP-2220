#include <stdio.h>
#define SIZE 100

int main() {
	int result[SIZE];
	result[15] = 10;
	result[56] = 32;
	
	int *ip = &result[15], *jp = &result[56], *tp;
	
	// Print the address and the corresponding value
	printf("ip: %p %i\n", ip, *ip);
	printf("jp: %p %i\n", jp, *jp);

	// Swap the values of the two pointers
	tp = ip;
	ip = jp;
	jp = tp;

	// Print the temporary value
	printf("\ntp: %p %i\n", tp, *tp);

	// Print the address and the corresponding value
	printf("\nip: %p %i\n", ip, *ip);
	printf("jp: %p %i\n", jp, *jp);


	return 0;
}