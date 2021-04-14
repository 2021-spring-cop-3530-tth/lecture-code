#ifndef HEAP_HPP
#define HEAP_HPP

#include <vector>

class Heap
{
	private:
		std::vector<int> tree;
		void Percolate (int id);
		void PercolateDown (int id);
		void Swap (int i, int j);
	public:
		int GetParent (int);
		int GetLeft (int);
		int GetRight (int);
		void Insert (int);
		int Peek ();
		int Pop ();
};

#endif /*HEAP_HPP*/
