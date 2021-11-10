#include <stdio.h>

int main() {
	struct Money {
		int dollars, cents;
	};

	struct Money monthlySales[12] = {[9].dollars = 13, [9].cents = 32};
	monthlySales[10].dollars = 12;
	monthlySales[10].cents = 95;

	printf("$%i.%i\n", monthlySales[9].dollars, monthlySales[9].cents);
	printf("$%i.%i\n", monthlySales[10].dollars, monthlySales[10].dollars);

	return 0;
}