#include <string>
#include <unordered_map>
#include <iostream>

int main ()
{
	std::unordered_map<std::string, int> myMap;

	std::cout << (myMap.find("foo") == myMap.end() ? "Nope" : "You betcha") << std::endl;

	// this actually creates a new data element
	std::cout << myMap["foo"] << std::endl;

	std::cout << (myMap.find("foo") == myMap.end() ? "Nope" : "You betcha") << std::endl;

	myMap["foo"] = 123;
	std::cout << myMap["foo"] << std::endl;
	return 0;
}
