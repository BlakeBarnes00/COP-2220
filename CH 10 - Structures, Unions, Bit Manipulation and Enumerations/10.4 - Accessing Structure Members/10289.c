#include <stdio.h>

int main() {
	int k = 3;

	struct Emp {
		double d;
		char *str;
		int arr[11];
	};

	struct Emp emp[30];
	emp[29].arr[10] = 12;
	emp[0].d = 3.5;
	emp[k].str = "Hello";


	return 0;
}