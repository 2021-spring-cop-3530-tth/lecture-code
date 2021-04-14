#include "../../catch/catch.hpp"
#include "../heap.hpp"

TEST_CASE ("Navigation test")
{
	Heap h;
	// test parent
	CHECK(1 == h.GetParent(3));
	CHECK(1 == h.GetParent(4));
	CHECK(-1 == h.GetParent(0));

	// test left
	CHECK(1 == h.GetLeft(0));
	CHECK(3 == h.GetLeft(1));

	// test right
	CHECK(2 == h.GetRight(0));
	CHECK(4 == h.GetRight(1));
}

TEST_CASE ("Heap test")
{
	Heap h;
	h.Insert(12);
	CHECK(12 == h.Peek());

	h.Insert(13);
	CHECK(13 == h.Peek());

	h.Insert(193); // max element
	h.Insert(1);
	h.Insert(13);
	CHECK(193 == h.Peek());

	CHECK(193 == h.Pop());
	CHECK(13 == h.Pop());
	CHECK(13 == h.Pop());
	CHECK(12 == h.Pop());
}
