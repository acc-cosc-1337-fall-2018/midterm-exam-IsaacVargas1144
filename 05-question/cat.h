#ifndef CAT_H
#define CAT_H
/*
Create a cat class with a void make_sound() const function that inherits from animal.
The make_sound function displays Meow to screen.
*/
class Cat
{
public:
	void make_sound() const
	{
		std::cout << "Meow!!";
	}

};


#endif // !CAT_H
