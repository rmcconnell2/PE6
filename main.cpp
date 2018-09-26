#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;


	std::cout << turtle_friend.MakeSound() << std::endl;

	Lion lion;

	std::cout << lion.MakeSound() << std::endl;

	Cat kitty_cat;

	std::cout << turtle_friend.MakeSound() << std::endl;
	std::cout << kitty_cat.MakeSound() << std::endl;
	std::cout << kitty_cat.HappyCat() << std::endl;
	std::cout << kitty_cat.AngryCat() << std::endl;


	return 0;
}
