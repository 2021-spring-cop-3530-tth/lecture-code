#include "selection-sort.hpp"

template <typename T>
void SelectionSort::Sort (std::vector<T>& list)
{
	for (int i = 0; i < list.size() - 1; ++i)
	{
		// select the "best" element
		int bestSoFar = i;
		for (int j = i + 1; j < list.size(); ++j)
		{
			if (list[j] < list[bestSoFar])
			{
				bestSoFar = j;
			}
		}

		Swap(list, i, bestSoFar);
	}
}

template <typename T>
void SelectionSort::Swap (std::vector<T>& list, int i, int j)
{
	int temp = list[i];
	list[i] = list[j];
	list[j] = temp;
}

template void SelectionSort::Swap (std::vector<int>& list, int i, int j);
template void SelectionSort::Sort (std::vector<int>& list);
