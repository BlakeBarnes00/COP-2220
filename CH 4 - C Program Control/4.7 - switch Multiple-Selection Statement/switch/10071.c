#include <stdio.h>

int main() {
	char response;
	printf("enter y, n, or h: ");
	scanf("%c", &response);

	switch(response) {
		case 'y': 
			printf("Your request is being processed\n");
			break;
		
		case 'n': 
			printf("Thank you anyway for your consideration\n");
			break;

		case 'h': 
			printf("Sorry, no help is currently available\n");
			break;

		default: 
			printf("Invalid entry; please try again\n");
			break;
	}

	return 0;
}