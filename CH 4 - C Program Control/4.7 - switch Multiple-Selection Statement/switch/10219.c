#include <stdio.h>

int main() {
	int acount = 0, bcount = 0, ccount = 0, dcount = 0, ecount = 0, fcount = 0, wcount = 0, icount = 0;
	char grade = 'A';
	
	switch(grade) {
		case 'A': 
			acount++;
			break;

		case 'B':
			bcount++;
			break;
		
		case 'C':
			ccount++;
			break;
		
		case 'D':
			dcount++;
			break;
		
		case 'E':
			ecount++;
			break;
		
		case 'F':
			fcount++;
			break;
		
		case 'W':
			wcount++;
			break;

		case 'I':
			icount++;
			break;
		
		default:
			break;
	}

	return 0;
}