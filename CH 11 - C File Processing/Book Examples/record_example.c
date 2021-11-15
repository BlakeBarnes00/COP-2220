#include <stdio.h>

int main() {
	FILE *cfPtr; // clients.txt ptr

	// fopen opens file. Exit program if NULL
	if((cfPtr = fopen("clients.txt", "w")) == NULL) {
		printf("File could not be opened.\n");
	} else {
		printf("Enter the account, name, and balance.\n");
		printf("Enter EOF to end input.\n");
		printf("? ");

		unsigned int account; 	// acc number
		char name[30]; 			// acc name
		double balance; 		// acc balance

		scanf("%d%29s%lf", &account, name, &balance);

		// write account, name, and balance into a file with fprintf
		while(!feof(stdin)) {
			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("? ");
			scanf("%d%29s%lf", &account, name, &balance);
		}
		fclose(cfPtr);
	}
	return 0;
}