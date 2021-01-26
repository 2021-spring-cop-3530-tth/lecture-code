#include "big-list-size.hpp"

class LinearSearch
{
	public:

		static long long Find (long long arrayItems[], long long searchKey)
		{
			long long foundIndex = -1;

			for (long long i = 0; i < BigListSize::LENGTH; ++i)
			{
				if (arrayItems[i] == searchKey)
				{
					foundIndex = i;
					break;
				}
			}

			return foundIndex;
		}
};
