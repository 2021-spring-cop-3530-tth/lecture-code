#include "graph.hpp"

Graph::Graph (int vertexCount)
{
	this->vertexCount = vertexCount;

	// init matrix
	this->matrix = new bool*[vertexCount];

	for (int i = 0; i < vertexCount; ++i)
	{
		this->matrix[i] = new bool[vertexCount];

		for (int j = 0; j < vertexCount; ++j)
		{
			this->matrix[i][j] = false;
		}
	}
}

bool Graph::HasEdge (int a, int b)
{
	if (!this->ValidVertex(a) || !this->ValidVertex(b))
	{
		return false;
	}

	return this->matrix[a][b];
}

void Graph::AddEdge (int a, int b)
{
	if (!this->ValidVertex(a) || !this->ValidVertex(b))
	{
		return;
	}

	this->matrix[a][b] = true;

	// undirected
	this->matrix[b][a] = true;
}

bool Graph::ValidVertex (int v)
{
	return v >= 0 && v < this->vertexCount;
}
