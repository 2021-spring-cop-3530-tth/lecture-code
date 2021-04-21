#ifndef GRAPH_HPP
#define GRAPH_HPP

class Graph
{
	private:
		int vertexCount;
		bool ** matrix;
		bool ValidVertex (int);
	public:
		Graph (int);
		bool HasEdge (int, int);
		void AddEdge (int, int);
};

#endif /*GRAPH_HPP*/
