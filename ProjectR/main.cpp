#include <iostream>
#include "raylib.h"

int main() {
	std::string name = "";
	std::cout << "Introduce your name:\n" << std::endl;
	std::cin >> name;
	std::cout << "Hello " << name << "!!!!" << std::endl;
	return 0;
}