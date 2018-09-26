#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;

	std::cout << turtle_friend.MakeSound() << std::endl;

	Lion lion;

	std::cout << lion.MakeSound() << std::endl;

	return 0;
}
