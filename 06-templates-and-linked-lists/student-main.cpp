
#include <vector>
#include <iostream>
#include "student.hpp"

int main ()
{
	std::vector<int> a;
	Student<int> s(93);

	Student<char> s1('A');

	Student<double> s2(98.7);

	return 0;
}
