#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *modelName;
	int modelYear;
	int recalled;

	modelName = "Extravagant";
	modelYear = 2002;
	
	recalled = strcmp(modelName, "Extravagant") == 0 && (modelYear >= 1999 && modelYear <= 2002);

	printf("%i\n", recalled);

	return 0;
}