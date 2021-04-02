#define CATCH_CONFIG_MAIN

#include "../../catch/catch.hpp"
#include "../node.hpp"

TEST_CASE ("Node test")
{
	Node<int> n(12);
	CHECK (12 == n.GetValue());

	// parent
	Node<int>* p = new Node<int>(5);
	n.SetParent(p);
	CHECK(p == n.GetParent());
	CHECK(5 == n.GetParent()->GetValue());

	// left
	Node<int>* l = new Node<int>(6);
	n.SetLeft(l);
	CHECK(l == n.GetLeft());
	CHECK(6 == n.GetLeft()->GetValue());

	// right
	Node<int>* r = new Node<int>(8);
	n.SetRight(r);
	CHECK(r == n.GetRight());
	CHECK(8 == n.GetRight()->GetValue());

	delete p;
	delete l;
	delete r;
}
