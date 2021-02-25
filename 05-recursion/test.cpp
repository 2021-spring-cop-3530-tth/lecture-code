#define CATCH_CONFIG_MAIN

#include "../catch/catch.hpp"
#include "binary-search.hpp"

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
