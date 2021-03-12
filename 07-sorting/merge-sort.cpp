#include "merge-sort.hpp"

void MergeSort::Sort (std::vector<int>& list)
{
	MergeSort::RecursiveSort(list, 0, list.size() -1);
}

void MergeSort::RecursiveSort(std::vector<int>& list, int left, int right)
{
	if (left >= right)
	{
		return;
	}

	int middle = (left + right) / 2;
	MergeSort::RecursiveSort(list, left, middle);
	MergeSort::RecursiveSort(list, middle + 1, right);

	MergeSort::Merge(list, left, right);
}
void MergeSort::Merge(std::vector<int>& list, int left, int right)
{
	std::vector<int> input = list;
	int middle = (left + right) / 2;
	int rightIndex = middle + 1;
	int leftIndex = left;
	int index = left;

	while (leftIndex <= middle && rightIndex <= right)
	{
		if (input[leftIndex] < input[rightIndex])
		{
			list[index++] = input[leftIndex++];
		}
		else
		{
			list[index++] = input[rightIndex++];
		}
	}

	while (rightIndex <= right)
	{
		list[index++] = input[rightIndex++];
	}

	while (leftIndex <= middle)
	{
		list[index++] = input[leftIndex++];
	}
}
