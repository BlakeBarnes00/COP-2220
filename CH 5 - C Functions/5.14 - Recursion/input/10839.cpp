#include <string>
#include <iostream>

void copy() {
	std::string s, in;
	std::cin >> in;
	s.append(in);
	
	if(std::cin.fail()) {
		return;
	}
	
	std::cout << s << std::endl;
	copy();
}


int main() {
	copy();
	return 0;
}