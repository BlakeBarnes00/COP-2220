#include <stdio.h>

int main() {
	int nZips = 5;
	int zipcodeList[] = {1, 1, 3, 4, 5};

	int j, k; 
	int duplicates = 0;

	for(j = 0; j < (nZips - 1) && !duplicates; j++) {
		for(k = j + 1; k < nZips && !duplicates; k++) {
			if(zipcodeList[j] == zipcodeList[k]) {
				duplicates = 1;
			}
		}
	}

	printf("%i", duplicates);


	return 0;
}