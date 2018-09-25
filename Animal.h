#ifndef _ANIMAL_H_
#define _ANIMAL_H_

class Animal {
public:
	Animal(std::string sound):
	sound_(sound)
	{}

	std::string MakeSound() const {return sound_; }

	void Fight(Animal &opponent);

	virtual int GetPower() { return 0; };

private:
	std::string sound_;
};

class Turtle : public Animal {
public:
	Turtle():
	Animal("\U0001F422  turtle turtle turtle")
	{}

	int GetPower() { return 7; };

};

// Define your animals here

class Cat : public Animal {
public:
	Cat():
	Animal("\U0001F431  meoooooow~")
	{}

	int GetPower() { return 10; };
	std::string AngryCat() { return "\U0001F63E  hissss!"; };
	std::string HappyCat() { return "\U0001F638  purr~"; };

};

#endif  // _ANIMAL_H_
