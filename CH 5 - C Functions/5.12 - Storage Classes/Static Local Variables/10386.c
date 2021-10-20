#include <stdio.h>
#include <stdbool.h>

bool newbie() {
	static bool isNewbie = true;
	bool x = isNewbie;
	isNewbie = 0;
	return x;
}

int main() {
	printf("%i\n", newbie());
	printf("%i\n", newbie());
	return 0;
}