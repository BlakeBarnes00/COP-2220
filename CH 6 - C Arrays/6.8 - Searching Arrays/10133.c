#include <stdio.h>

int main() {
	int nZips = 5;
	int zipcodeList[] = {32165, 32165, 32162, 32164, 32149};

	int k, duplicates = 0;

	for(k = 0; k < nZips; k++) {
		if(zipcodeList[k] == zipcodeList[k+1]) {
			duplicates = 1;
			break;
		} 
	}

	printf("%i", duplicates);


	return 0;
}