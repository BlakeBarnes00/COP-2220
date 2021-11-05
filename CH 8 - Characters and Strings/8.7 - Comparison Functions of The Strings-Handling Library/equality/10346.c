#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *modelName;
	int modelYear;
	int recalled;

	modelName = "Extravagant";
	modelYear = 2003;
	
	recalled = ((strcmp(modelName, "Guzzler") == 0 || (strcmp(modelName, "Extravagant") == 0))
		&& ((modelYear >= 2004 && modelYear <= 2007) || (modelYear >= 1999 && modelYear <= 2002)));

	printf("%i\n", recalled);

	return 0;
}