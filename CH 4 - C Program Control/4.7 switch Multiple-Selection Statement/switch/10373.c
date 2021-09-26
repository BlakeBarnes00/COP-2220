#include <stdio.h>

int main() {
	int yesCount, noCount;
	char response;

	scanf("%c", &response);
	switch(response) {
		case 'y':
		case 'Y':
			yesCount++;
			printf("YES WAS RECORDED\n");
			break;
	
		case 'n': 
		case 'N':
			noCount++;
			printf("NO WAS RECORDED\n");
			break;
	
		default:
			printf("INVALID");
			break;
	}

	return 0;
}