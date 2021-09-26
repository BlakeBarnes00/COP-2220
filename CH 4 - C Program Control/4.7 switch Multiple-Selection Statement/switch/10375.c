#include <stdio.h>

int main() {
	const int age;
	printf("Age: ");
	scanf("%i", &age);
	switch(age) {
		case 0:
		case 1:
			printf("ineligible");
			break;
		case 2:
			printf("toddler");
			break;
		case 3:
		case 4: 
		case 5:
			printf("early childhood");
			break;
		case 6:
		case 7: 
			printf("young reader");
			break;	
		case 8: 
		case 9:
		case 10:
			printf("elementary");
			break;
		case 11: 
		case 12: 
			printf("middle");
			break;
		case 13:
			printf("impossible");
			break;
		case 14:
		case 15:
		case 16:
			printf("high school");
			break;
		case 17:
		case 18:
			printf("scholar");
			break;
		default:
			printf("ineligable");
			break;
	}
	
	return 0;
}