#include "binary-search.hpp"

long long BinarySearch::Search(long long a[], long long length, long long searchKey)
{
	long long left = 0;
	long long right = length;
	long long middle;

	while (left <= right)
	{
		middle = (left + right) / 2;
		if (searchKey == a[middle])
		{
			return middle;
		}
		else if (searchKey > a[middle])
		{
			left = middle + 1;
		}
		else // if (searchKey < a[middle]
		{
			right = middle - 1;
		}
	}

	return -1;
}
