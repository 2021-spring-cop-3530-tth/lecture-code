#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

#include <vector>
#include <iostream>

class MergeSort
{
	private:
		static void Merge(std::vector<int>&, int, int);
		static void RecursiveSort(std::vector<int>&, int, int);
	public:
		static void Sort (std::vector<int>&);
};

#endif /*MERGE_SORT_HPP*/
