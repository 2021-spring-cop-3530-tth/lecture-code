#define CATCH_CONFIG_MAIN

#include "../../catch/catch.hpp"
#include "../node.hpp"
#include "../list.hpp"

TEST_CASE("Test Node constructo")
{
	Node<int>* n;
	n = new Node<int>(7);

	CHECK (7 == n->GetData());
	CHECK (nullptr == n->GetNext());

	delete n;
}

TEST_CASE("Chaining nodes")
{
	Node<int>* n;
	n = new Node<int>(7);

	Node<int>* m;
	m = new Node<int>(12, n);

	CHECK (12 == m->GetData());
	CHECK (n == m->GetNext());

	CHECK (7 == m->GetNext()->GetData());

	delete n;
	delete m;
}

TEST_CASE("Linked List construction")
{
	List<int> scores;
	scores.DeleteFromHead();
	scores.InsertAtHead(12);

	// Peek needs to return pointer to first node
	CHECK (12 == scores.Peek()->GetData());

	scores.InsertAtHead(7);
	CHECK (7 == scores.Peek()->GetData());
	CHECK (12 == scores.Peek()->GetNext()->GetData());
	CHECK (nullptr == scores.Peek()->GetNext()->GetNext());

	scores.DeleteFromHead();
	CHECK (12 == scores.Peek()->GetData());

	scores.DeleteFromHead();
	scores.InsertAtHead(12);
	scores.InsertAtHead(12);
	scores.InsertAtHead(12);
	scores.InsertAtHead(12);
	scores.InsertAtHead(12);
}
