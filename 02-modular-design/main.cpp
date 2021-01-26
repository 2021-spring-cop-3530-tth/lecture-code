#include <iostream>
#include <string>
#include "student.hpp"
#include "student.hpp"

#define FOO 12
#define MAX(a, b) (a < b ? b : a)

std::string getNumbers (int stepSize = 1)
{
	std::string output;

	for (int i = 1 * stepSize; i <21; i += stepSize)
	{
		output += std::to_string(i);
	}

	return output;
}

int main ()
{
	std::cout << FOO << std::endl;
	std::cout << MAX(12, 97) << std::endl;

	std::string output = getNumbers();

	// output error if the output changed
	std::string oldOutput ="1234567891011121314151617181920";
	if (output != oldOutput)
	{
		std::cout << "Output changed: " << output;
	}

	std::cout << output;
	std::cout << std::endl;

	std::string evenOutput = getNumbers(2);
	std::string oldEvenOutput ="2468101214161820";
	if (evenOutput != oldEvenOutput)
	{
		std::cout << "Output changed: " << evenOutput;
	}

	std::cout << evenOutput;
	std::cout << std::endl;

	//Student section[4];
	Student s1(1.8, "John", "Doe");
	Student s2(1.4, "Jane", "Doe");
	Student s3(4.0, "Ada", "Lovelace");
	Student s4(3.87, "Alan", "Turing");

	std::cout << s1.ToString() << "\n";
	std::cout << s2.ToString() << "\n";
	std::cout << s3.ToString() << "\n";
	std::cout << s4.ToString() << "\n";
}
