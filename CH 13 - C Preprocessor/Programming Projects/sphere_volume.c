#include <math.h>
#include <stdio.h>

#define SPHERE_VOLUME(r) ((4.0 / 3) * (3.14159) * ((r)*(r)*(r)))

int main() {
	printf("Sphere radius\tVolume\n");
	
	for(int i = 1; i <= 10; i++) {
		printf("%-16i%.2f\n", i, SPHERE_VOLUME(i));
	}

	return 0;
}