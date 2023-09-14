#include <iostream>
#include "name.hpp"

int main() {
	std::cout << "Hello World!" << std::endl;
	std::string name = askName();
	std::cout << "Hello, " + name << std::endl;
	return 0;
}
