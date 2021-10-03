int alternator() {
	static int x = 1;
	if(x == 0) {
		x = 1;
		return 0;
	} else if(x == 1) {
		x = 0;
		return 1;
	}
}