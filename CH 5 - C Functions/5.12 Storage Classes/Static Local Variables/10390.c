#include <stdio.h>

int max(int x) {
	static int max = 0;
	if(x > max){
		max = x;
	}
	return max;	
}

int main() {
	printf("%i\n", max(3));
	printf("%i\n", max(4));
	printf("%i\n", max(3));
	printf("%i\n", max(7));
	printf("%i\n", max(3));
	printf("%i\n", max(2));

	return 0;
}