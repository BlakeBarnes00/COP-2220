#include <stdio.h>

int max(int a, int b, int c) {
	if(a >= b && a >= c) {
		return a;
	} else if(b >= a && b >= c) {
		return b;
	} else if(c >= a && c >= b) {
		return c;
	}
}

int main() {
	printf("%i", max(12, 54, 13));
	return 0;
}