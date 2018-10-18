#ifndef ANIMAL_H
#define ANIMAL_H
/*
Create an animal class with a void make_sound() const function.
The make_sound function displays "I make different sounds" to screen.
*/


class Animal
{
public:
	void make_sound() const
	{
		std::cout << "I make different sounds to scream";
	}

};
#endif // !ANIMAL_H
