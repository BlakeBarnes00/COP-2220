#include <math.h>

int absoluteValue(int x) {
	if(x == 0) {
		return 0;
	}else if(x < 0) {
		return x * -1;
	} else {
		return x;
	}
}