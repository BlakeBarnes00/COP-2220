#include <stdio.h>

int sum(int n) {
	if(n == 0) {
		return 0;
	} else {
		int total = 0;
		total += n;
		return total + sum(n-1);
	}
}

int main() {
	printf("%i", sum(3));
	return 0;
}