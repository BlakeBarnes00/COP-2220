#include <stdio.h>

// Variables defined by MPL
char* S = "hangar steak, red potatoes, asparagus";
char* T = "whole trout, long rice, brussel sprouts";
char* B = "cheddar cheeseburger, steak fries, cole slaw";

int age = 21;

int main() {
	char choice;
	scanf("%c", &choice);
	if(choice == 'S') {
		printf("%s\n", S);
		if(age <= 21) {
			printf("vegetable juice");
		} else {
			printf("cabernet");
		}
	} else if(choice == 'T') {
		printf("%s\n", T);
		if(age <= 21) {
			printf("cranberry juice");
		} else {
			printf("chardonnay");
		}
	} else if(choice == 'B') {
		printf("%s\n", B);
		if(age <= 21) {
			printf("soda");
		} else {
			printf("IPA");
		}
	} else {
		printf("invalid menu selection");
	}
}