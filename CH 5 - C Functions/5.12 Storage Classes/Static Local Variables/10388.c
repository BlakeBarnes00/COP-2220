#include <stdio.h>

double averager(double x) {
	static double total = 0;
	static int count = 0;
	total += x;
	count += 1;

	return total/count;
}

int main() {
	printf("Average: %lf\n", averager(10));
	printf("Average: %lf\n", averager(20));
	printf("Average: %lf\n", averager(30));
	return 0;
}