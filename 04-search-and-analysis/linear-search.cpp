#include "linear-search.hpp"

long long LinearSearch::Search(long long a[], long long length, long long searchKey)
{
	for (long long i = 0; i < length; ++i)
	{
		if (a[i] == searchKey)
		{
			// we found it
			return i;
		}
	}

	return -1;
}
