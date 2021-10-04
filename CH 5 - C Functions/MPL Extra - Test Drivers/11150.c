int max(int x, int y) {
	if(x > y)
		return x;
	else if(y > x)
		return y;
}

int testmax() {
	if(max(4, 6) == 6 && max(1, 0) == 1 && max(5, 5) == 5)
		return 1;
	else
		return 0;
}