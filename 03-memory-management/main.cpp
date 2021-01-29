#include <iostream>
#include "sock-drawer.hpp"

void doSomeCoolStuff (SockDrawer s)
{
	// WOW!!
}

void realIncrement (int& a)
{
	++a;
}
void increment (int a)
{
	++a;
}

int main ()
{
	int foo = 12;
	std::cout << foo << std::endl; // prints 12

	int *bar = &foo; // pointer bar points to the same spot in memory as foo
	std::cout << bar << std::endl; // prints the address of foo
	std::cout << *bar << std::endl; // prints 12

	bar = new int(7); // now bar points to a new integer in the heap

	int &baz = foo; // baz is a constant pointer to foo
	std::cout << baz << std::endl; // prints 12

	int a = 5;
	baz = a; // changing baz also changes foo
	std::cout << baz << std::endl; // prints 5
	std::cout << foo << std::endl; // prints 5

	// passing by value.
	// The side effects of the function won't be reflected here
	increment(foo);
	std::cout << foo << std::endl; // prints 5

	// passing by reference.
	// changes made inside the function will affect foo
	realIncrement(foo);
	std::cout << foo << std::endl; // prints 6

	delete bar;

	int array[10];
	std::cout << array[0] << std::endl; // uninitialized

	SockDrawer s(12);

	doSomeCoolStuff(s);

	SockDrawer s2 = s;

	return 0;
}