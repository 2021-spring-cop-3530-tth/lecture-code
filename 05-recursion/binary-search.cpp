#include "binary-search.hpp"

long long BinarySearch::Search(long long a[], long long length, long long searchKey)
{
	long long left = 0;
	long long right = length;
	return BinarySearch::RecursiveSearch(a, left, right, searchKey);
}

long long BinarySearch::RecursiveSearch(long long a[], long long left, long long right, long long searchKey)
{
	long long middle;

	if (left <= right)
	{
		middle = (left + right) / 2;
		if (searchKey == a[middle])
		{
			return middle;
		}
		else if (searchKey > a[middle])
		{
			left = middle + 1;
			return BinarySearch::RecursiveSearch(a, left, right, searchKey);
		}
		else // if (searchKey < a[middle]
		{
			right = middle - 1;
			return BinarySearch::RecursiveSearch(a, left, right, searchKey);
		}
	}

	return -1;
}
