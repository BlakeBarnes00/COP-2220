#include <iostream>
#include <string>

int add() {
	int x;
	if(std::cin.eof())
		return 0;
	
	std::cin >> x;
	return(x + add());
}