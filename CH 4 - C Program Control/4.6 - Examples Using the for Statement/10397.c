#include <stdio.h>
#include <memory.h>

int main() {
	int total = 0;
	
	int employee_count, hourly_rate;
	int daily_hours[5];
	
	// Get amount of employees
	printf("----------------\n");
	printf("Employee Count: ");
	scanf("%i", &employee_count);

	for(int i = 1; i <= employee_count; i++) {
		printf("----------------\n");
		printf("Hourly Rate: ");
		scanf("%i", &hourly_rate);
		printf("----------------\n");

		// Loop through the week days
		for(int j = 1; j <= 5; j++) {
			printf("Day %i: ", j);
			scanf("%i", &daily_hours[j-1]);
			
			total += (int)(daily_hours[j-1] * hourly_rate);
		}
		

		// Reset the array for the next employee
		memset(daily_hours, 0, sizeof(int)*5);
	}

	printf("----------------\n");
	printf("Total: %i", total);

	return 0;
}