#include <stdio.h>

void printAttitude(int x) {
	switch(x) {
	case 1:
		printf("disagree\n");
		break;
	case 2:
		printf("no opinion\n");
		break;
	case 3:
		printf("agree\n");
		break;
	default:
		break;
	}
}