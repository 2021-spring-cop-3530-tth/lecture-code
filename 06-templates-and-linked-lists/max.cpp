
#include <iostream>

// Max
template <typename T>
T Max (T a[], T size)
{
	// error checking size should be > 0
	T maxSoFar = a[0];
	for (int i = 1; i < size; ++i)
	{
		if (a[i] > maxSoFar)
		{
			maxSoFar = a[i];
		}
	}

	return maxSoFar;
}

int main ()
{
	int intArray[] = {2, 12, -4, 47, 0, -7};

	std::cout << "Max int is " << Max(intArray, 6) << std::endl;
	return 0;
}
