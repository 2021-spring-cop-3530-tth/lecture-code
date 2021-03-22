#include "student.hpp"
#include <unordered_set>
#include <string>
#include <iostream>

int main ()
{
	std::unordered_set<Student> cop3530;

	Student s1 (12345, "Ada Lovelace");
	cop3530.insert(s1);

	Student s2 (12345, "Alan Turing");
	cop3530.insert(s2);

	std::cout << cop3530.find(s1)->GetName() << std::endl;
	std::cout << cop3530.find(s2)->GetName() << std::endl;
	return 0;
}
