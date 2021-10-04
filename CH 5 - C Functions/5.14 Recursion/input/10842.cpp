#include <iostream>
#include <string>

int count() {
	std::string s = "";
	std::cin >> s;
	int w_count = 0;
	
	if(s != "")
		w_count += 1 + count();
	else
		w_count = 0;
	
	return w_count;
}