#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *modelName;
	int modelYear;
	int recalled;

	modelName = "Extravagant";
	modelYear = 2002;
	
	if(strcmp(modelName, "Extravagant") == 0 && (modelYear >= 1999 && modelYear <= 2002)) {
		printf("RECALL\n");
	} else if(strcmp(modelName, "Guzzler") == 0 && (modelYear >= 2004 && modelYear <= 2007)) {
		printf("RECALL\n");
	}

	return 0;
}