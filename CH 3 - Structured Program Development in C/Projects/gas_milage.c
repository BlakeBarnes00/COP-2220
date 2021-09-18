/*
3.16 (Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles.
One driver has kept track of several tankfuls of gasoline by recording miles driven and
gallons used for each tankful. Develop a program that will input the miles driven and
gallons used for each tankful. The program should calculate and display the miles per
gallon obtained for each tankful. After processing all input information, the program
should calculate and print the combined miles per gallon obtained for all tankfuls.

Here is a sample input/output dialog:

Enter the gallons used (-1 to end): 12.8
Enter the miles driven: 287
The miles/gallon for this tank was 22.421875 miles.
Enter the gallons used (-1 to end): 10.3
Enter the miles driven: 200
The miles/gallon for this tank was 19.417475 miles.
Enter the gallons used (-1 to end): 5
Enter the miles driven: 120
The miles/gallon for this tank was 24.000000 miles.
Enter the gallons used (-1 to end): -1
The overall average miles/gallon was 21.601423 miles.

Note that both the gallons used and the miles driven may be decimal values.
*/

#include <stdio.h>

int main() {
	int tripCount = 0;
	double gallons = 0, miles = 0;
	double mpg = 0, totalMPG = 0, avgMPG = 0;
	while(1) {
		printf("Enter gallons used (-1 to end): ");
		scanf("%lf", &gallons);
		
		if(gallons == -1) {
			//printf("%lf MPG | %i trips\n", totalMPG, tripCount);
			break;
		} else {
			// Get the miles drove
			printf("Enter miles driven: ");
			scanf("%lf", &miles);

			// Print the MPG
			mpg = miles/gallons;
			printf("The miles/gallons for this tank was %lf miles.\n", mpg);
			
			// Increase trip count for total average
			totalMPG += mpg;
			tripCount++;
		}
	}

	avgMPG = totalMPG/tripCount;
	printf("The overall average miles/gallon was %Lf miles\n", avgMPG);

	return 0;
}