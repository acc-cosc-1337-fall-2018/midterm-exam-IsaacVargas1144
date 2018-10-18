#ifndef DOG_H
#define DOG_H
/*
Create a dog class with a void make_sound() const function that inherits from animal.
The make_sound function displays Arff to screen.
*/
class Dog
{
public:
	void make_sound()
	{
		std::cout << "Arff!!";
	}

};

#endif // !DOG_H
