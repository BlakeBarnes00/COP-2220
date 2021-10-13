#include <stdio.h>

int main() {
	int n = 50;
	int wasReadIn[50] = {0};

	int number;

	for(int i = 0; i < 50; i++) {
		wasReadIn[i] = 0;
	}

	for(int i = 0; i < n; i++) {
		scanf("%i", &number);
		wasReadIn[number]++;
	}

	for(int i = 0; i < 50; i++) {
		if(wasReadIn[i] > 0) {
			for(int j = 0; j < wasReadIn[i]; j++) {
				printf("%i ", i);
			}
		}
	}

	return 0;
}