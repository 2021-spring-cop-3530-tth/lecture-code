#define CATCH_CONFIG_MAIN

#include "../../catch/catch.hpp"
#include "../node.hpp"
#include "../tree.hpp"

TEST_CASE ("Tree Insert test")
{
	Tree<int> t;
	t.Insert(2);

	CHECK(2 == t.GetRoot()->GetValue());

	t.Insert(12);
	t.Insert(8);
	t.Insert(27);

	Node<int>* root = t.GetRoot();
	CHECK(8 == root->GetRight()->GetLeft()->GetValue());
	CHECK(27 == root->GetRight()->GetRight()->GetValue());

	REQUIRE(nullptr != t.Search(8));
	CHECK(8 == t.Search(8)->GetValue());
	CHECK(nullptr == t.Search(721));

	CHECK("2 8 12 27 " == t.Print());
}
