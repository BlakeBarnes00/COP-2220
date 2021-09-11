#include <stdio.h>

// MPL Variables
int firstPlaceWinner = 21, secondPlaceWinner = 62;

int main() {
	int temp = firstPlaceWinner;
	firstPlaceWinner = secondPlaceWinner;
	secondPlaceWinner = temp;
	return 0;
}