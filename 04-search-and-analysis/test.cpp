#define CATCH_CONFIG_MAIN

#include "../catch/catch.hpp"
#include "linear-search.hpp"
#include "binary-search.hpp"

TEST_CASE("Brute force testing")
{
	// what do we need
	long long a[] = {999, 12, -34, 0, 22, 22, 5};
	long long length = 7;

	long long index = LinearSearch::Search(a, length, 10);
	CHECK(-1 == index);

	index = LinearSearch::Search(a, length, 999);
	CHECK(0 == index);

	index = LinearSearch::Search(a, length, 5);
	CHECK(length - 1 == index);

	index = LinearSearch::Search(a, length, 12);
	CHECK(1 == index);
}

TEST_CASE("Binary search test")
{
	long long a[] = {-34, 0, 5, 12, 22, 22, 999};
	long long length = 7;

	long long index = BinarySearch::Search(a, length, 10);
	CHECK(-1 == index);

	index = BinarySearch::Search(a, length, 999);
	CHECK(length - 1 == index);

	index = BinarySearch::Search(a, length, 5);
	CHECK(2 == index);

	index = BinarySearch::Search(a, length, 12);
	CHECK(3 == index);
}
