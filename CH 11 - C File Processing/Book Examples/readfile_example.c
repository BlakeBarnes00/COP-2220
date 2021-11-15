#include <stdio.h>

int main() {
	FILE *cfPtr;

	if((cfPtr = fopen("clients.txt", "r")) == NULL) {
		printf("File could not be opened.\n");
	} else {
		unsigned int account;
		char name[30];
		double balance;

		printf("%-10s%-13s%s", "Account", "Name", "Balance\n");
		fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);

		while(!feof(cfPtr)) {
			printf("%-10d%-13s%1.2f\n", account, name, balance);
			fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
		}
		fclose(cfPtr);
	}

	return 0;
}