#include <stdio.h>

// Variables created by MLP
int i = 3;
int j = 2;
int temp;

int main() {
	temp = i;
	i = j;
	j = temp;
	return 0;
}