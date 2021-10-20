#include <stdio.h>

long oddevenfact(int x) {
	if(x > 2) {
		return (oddevenfact(x-2) * (long)x);
	} else {
		return (long)x;
	}
}

int main() {
	printf("%ld", oddevenfact(7));
	return 0;
}