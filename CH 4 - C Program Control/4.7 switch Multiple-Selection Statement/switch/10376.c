#include <stdio.h>

int main() {
	int status;

	while(1){
		printf("Code: ");
		scanf("%i", &status);

		switch(status) {
			case 200:
				printf("OK (fulfilled)\n");
				break;
			case 403:
				printf("forbidden\n");
				break;
			case 404: 
				printf("not found\n");
				break;
			case 500:
				printf("server error\n");
				break;
			default:
				printf("%i is an unknown error.\n", status);
				break;
		}
	}

	return 0;
}