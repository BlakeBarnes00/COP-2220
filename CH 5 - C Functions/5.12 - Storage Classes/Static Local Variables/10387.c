#include <stdio.h>

int alternator() {
	static int x = 1;
	int y;
	
	if(x == 0) {
		y = x;
		x = 1;
	} else if(x == 1) {
		y = x;
		x = 0;
	}
	return y;
}

int main() {
	printf("%i\n", alternator());
	printf("%i\n", alternator());
	printf("%i\n", alternator());
	printf("%i\n", alternator());
	return 0;
}