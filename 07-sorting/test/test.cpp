#define CATCH_CONFIG_MAIN

#include "../../catch/catch.hpp"
#include "../selection-sort.hpp"
#include "../merge-sort.hpp"
#include<vector>

TEST_CASE("Testing Insertion sort")
{
	// start with a list that isn't sorted
	std::vector<int> raw = {-4, 23, 54, 74, 54, 35, -12, 2, 3565, 27, 535, 12, 0};
	std::vector<int> sorted = {-12, -4, 0, 2, 12, 23, 27, 35, 54, 54, 74, 535, 3565};
	// call our sort method
	SelectionSort::Sort(raw);
	// compare the result with sorted data
	REQUIRE(sorted == raw);
}

TEST_CASE("Testing Merge sort")
{
	// start with a list that isn't sorted
	std::vector<int> raw = {-4, 23, 54, 74, 54, 35, -12, 2, 3565, 27, 535, 12, 0};
	std::vector<int> sorted = {-12, -4, 0, 2, 12, 23, 27, 35, 54, 54, 74, 535, 3565};
	// call our sort method
	MergeSort::Sort(raw);
	// compare the result with sorted data
	REQUIRE(sorted == raw);
}
