#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include<vector>

class SelectionSort
{
	private:
		template <typename T>
		static void Swap (std::vector<T>&, int, int);
	public:
		template <typename T>
		static void Sort (std::vector<T>&);
};

#endif /*SELECTION_SORT_HPP*/
