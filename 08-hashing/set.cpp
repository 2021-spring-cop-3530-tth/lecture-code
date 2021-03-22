#include <unordered_set>
#include <iostream>

int main ()
{
	std::unordered_set<int> mySet;
	mySet.insert(12);
	mySet.insert(18);

	for (const int& item: mySet)
	{
		std::cout << item << ' ';
	}

	std::cout << std::endl;

	std::cout << (mySet.find(12) == mySet.end() ? "Nope" : "You betcha") << std::endl;

	mySet.erase(12);

	std::cout << (mySet.find(12) == mySet.end() ? "Nope" : "You betcha") << std::endl;
	return 0;
}
