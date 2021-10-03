#include <stdio.h>

void dashedLine(int x) {
	if(x > 0) {
		for(int i = 0; i < x; i++) {
			printf("-");
		}
		printf("\n");
	}
}