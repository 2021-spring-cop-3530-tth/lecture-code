#include <iostream>
#include "binary-search.cpp"
// #include "linear-search.cpp"

void FillArray (long long arrayItems[]);

int main ()
{
	long long searchKey = 0;
	static long long arrayItems[LENGTH];
	long long index = -1;
	FillArray(arrayItems);

	while (true)
	{
		std::cout << "Enter a number to search for: ";
		std::cin >> searchKey;

		if (searchKey < 0)
		{
			break;
		}

		// index = LinearSearch::Find(arrayItems, searchKey);
		index = BinarySearch::Find(arrayItems, searchKey);

		if (index >= 0)
		{
			std::cout << "Found " << searchKey << " at index " << index << std::endl;
		}
		else
		{
			std::cout << searchKey << " not found!" << std::endl;
		}
	}

	return 0;
}

void FillArray (long long arrayValues[])
{
	for (long long i = 0; i < LENGTH; ++i)
	{
		arrayValues[i] = i;
	}
}