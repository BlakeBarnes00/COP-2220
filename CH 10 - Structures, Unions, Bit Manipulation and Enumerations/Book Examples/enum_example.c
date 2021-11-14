#include <stdio.h>

typedef enum {
	JAN, FEB, MAR, APR, JUN, JUL, AUG, SEP, OCT, NOV, DEC
} months;

int main() {
	const char *monthName[] = {"January", "Febuary", "March", "April", "May", 
		"June", "July", "August", "September", "October", "November", "December"
	};

	for(months month = JAN; month <= DEC + 1; month++) {
		printf("%2d%11s\n", month + 1, monthName[month]);
	}
	return 0;
}