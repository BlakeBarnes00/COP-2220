#include <stdio.h>

int main() {
	FILE *inf1, *inf2;

	int f1, f2, fmax;
	inf1 = fopen("f1", "r");
	inf2 = fopen("f2", "r");

	fscanf(inf1, "%d", &f1);
	fscanf(inf2, "%d", &f2);

	fmax = f1 > f2 ? f1 : f2;

	fclose(inf1);
	fclose(inf2);

	printf("%i\n", fmax);

	return 0;
}