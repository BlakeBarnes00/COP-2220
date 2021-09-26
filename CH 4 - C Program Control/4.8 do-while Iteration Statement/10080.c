#include <stdio.h>
// MPL defined variable
int k;
int main() {
	k = 0;
	do {
		printf("*");
		k++;
	} while(k < 97);
}