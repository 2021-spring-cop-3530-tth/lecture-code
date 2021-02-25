#include <iostream>

// define swap
template <typename T>
void Swap (T &a, T &b)
{
	T temp = b;
	b = a;
	a = temp;
}

int main ()
{
	int a = 12;
	int b = 6;

	Swap(a, b);
	std::cout << "a now has " << a << std::endl;
	std::cout << "b now has " << b << std::endl;

	char pi = 'p';
	char theta = 't';

	Swap (pi, theta);
	std::cout << "pi now has " << pi << std::endl;
	std::cout << "theta now has " << theta << std::endl;
	return 0;
}
