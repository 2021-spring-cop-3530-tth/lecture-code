#ifndef BINARY_SEARCH_HPP
#define BINARY_SEARCH_HPP

class BinarySearch
{
	private:
		static long long RecursiveSearch(long long a[], long long left, long long right, long long searchKey);
		
	public:
		static long long Search(long long a[], long long length, long long searchKey);
};

#endif
