#include <iostream>
#include <string>

int countPos() {
	int x;
	std::cin >> x;
	
	if(std::cin.fail())
		return 0;
	
	return (x > 0) + countPos();
}