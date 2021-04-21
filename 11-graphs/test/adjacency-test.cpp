#include "../../catch/catch.hpp"
#include "../graph.hpp"

TEST_CASE ("Constructor")
{
	Graph g(5);
	CHECK (false == g.HasEdge(0, 1));

	// add
	g.AddEdge(0, 1);
	CHECK (true == g.HasEdge(0, 1));

	// testing undirected
	CHECK (true == g.HasEdge(1, 0));

	CHECK (false == g.HasEdge(-1, 0));
	g.AddEdge(-1, 0);
	CHECK (false == g.HasEdge(-1, 0));
}
