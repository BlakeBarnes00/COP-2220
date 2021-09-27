#include <stdio.h>
#include <stdbool.h> // For true

float calculate_salary(float sale, float rate) {
	return (sale * rate) + 200;
}

int main() {
	float sale;
	float rate = 0.09;
	
	while(true) {
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &sale);
		
		if(sale == -1) {
			break;
		} else {
			printf("Salary is: $%.2f\n", calculate_salary(sale, rate));
		}
	}

	return 0;
}