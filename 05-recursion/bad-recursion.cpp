#include <iostream>

void f (int i)
{
	std::cout << i << '\n';
	f(++i);
}

int main ()
{
	f(1);
	return 0;
}