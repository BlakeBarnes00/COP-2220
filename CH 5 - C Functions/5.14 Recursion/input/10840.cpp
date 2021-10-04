#include <iostream>
#include <string>

void rcopy() {
	std::string x;
	std::cin >> x;
	if(std::cin.fail())
		return;
	
	rcopy();
	std::cout << x << std::endl;
}