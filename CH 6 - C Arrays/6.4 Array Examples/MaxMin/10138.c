#include <stdio.h>
int findMostTickets(int parkingTickets[], int ndays) {
	int mostTickets = 0;
	for(int k = 0; k < ndays; k++) {
		if(parkingTickets[k] > mostTickets) {
			mostTickets = parkingTickets[k];
		}
	}
	return mostTickets;
}

int main() {
	int ndays = 6;
	int parkingTickets[] = {3, 33, 654, 675, 41, 336};
	printf("Most tickets: %i\n", findMostTickets(parkingTickets, ndays));

	return 0;
}