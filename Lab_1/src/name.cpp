#include <iostream>

std::string askName() {
	std::string name;
	
	std::cout << "Please enter your name: ";
	std::cin >> name;

	return name;
}
