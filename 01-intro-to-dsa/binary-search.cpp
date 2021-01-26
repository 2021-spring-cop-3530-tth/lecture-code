#include "big-list-size.hpp"

class BinarySearch
{
	private:
		static long long BinaryFind (long long arrayItems[], long long start, long long end, long long searchKey)
		{
			if (start > end)
			{
				return -1;
			}

			long long mid = (start + end) / 2;

			if (searchKey < arrayItems[mid])
			{
				return BinaryFind(arrayItems,0,  mid - 1, searchKey);
			}
			else if (searchKey > arrayItems[mid])
			{
				return BinaryFind(arrayItems, mid + 1, end, searchKey);
			}
			else // match
			{
				return mid;
			}
		}

	public:

		static long long Find (long long arrayItems[], long long searchKey)
		{
			return BinaryFind(arrayItems, 0, BigListSize::LENGTH, searchKey);
		}
};
