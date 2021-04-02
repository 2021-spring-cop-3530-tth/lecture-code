#ifndef TREE_HPP
#define TREE_HPP
#include "node.hpp"
#include <string>
#include <sstream>

template <typename T>
class Tree
{
	private:
		Node<T>* root;
		std::string InOrderPrint (Node<T>* subtreeRoot);
		void DeleteSubTree (Node<T>* subtreeRoot);
	public:
		Tree ();
		void Insert (T value);
		Node<T>* GetRoot ();
		Node<T>* Search (T value);
		std::string Print ();
		~Tree ();
};

#endif /*TREE_HPP*/
