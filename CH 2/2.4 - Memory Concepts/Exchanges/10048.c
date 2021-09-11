#include <stdio.h>
// variables i and j are determined by MPL
int i = 3;
int j = 6;

int main() {
	int itemp = i;
	int jtemp = j;

	i = jtemp;
	j = itemp;

	// printf("%d\n%d\n", i, j);

	return 0;
}