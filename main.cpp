#include "lib.h"

#include <iostream>

int main(int, char **) {
	std::cout << "My application version: " << version() << std::endl;
	std::cout << "Hello, world!" << std::endl;
	return 0;
}
