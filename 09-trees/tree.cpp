#include "tree.hpp"

template <typename T>
Tree<T>::Tree ()
{
	this->root = nullptr;
}

template <typename T>
void Tree<T>::Insert (T value)
{
	Node<T>* newNode = new Node<T>(value);
	Node<T>* currentNode = this->root;
	if (currentNode == nullptr)
	{
		this->root = newNode;
	}
	else
	{
		while (currentNode != nullptr)
		{
			if (currentNode->GetValue() > value)
			{
				// left sub-tree
				if (currentNode->GetLeft() == nullptr)
				{
					currentNode->SetLeft(newNode);
					newNode->SetParent(currentNode);
					return;
				}
				currentNode = currentNode->GetLeft();
			}
			else
			{
				// right sub-tree
				if (currentNode->GetRight() == nullptr)
				{
					currentNode->SetRight(newNode);
					newNode->SetParent(currentNode);
					return;
				}
				currentNode = currentNode->GetRight();
			}
		}
	}
}

template <typename T>
Node<T>* Tree<T>::Search (T value)
{
	Node<T>* currentNode = this->root;
	while (currentNode != nullptr)
	{
		if (currentNode->GetValue() == value)
		{
			// found it
			return currentNode;
		}
		else
		{
			if (currentNode->GetValue() > value)
			{
				currentNode = currentNode->GetLeft();
			}
			else
			{
				currentNode = currentNode->GetRight();
			}
		}
	}

	return nullptr;
}

template <typename T>
Node<T>* Tree<T>::GetRoot ()
{
	return this->root;
}

template <typename T>
std::string Tree<T>::Print ()
{
	return this->InOrderPrint(this->root);
}

template <typename T>
std::string Tree<T>::InOrderPrint (Node<T>* subtreeRoot)
{
	std::ostringstream out;

	if (subtreeRoot != nullptr)
	{
		out << this->InOrderPrint(subtreeRoot->GetLeft());
		out << subtreeRoot->GetValue() << ' ';
		out << this->InOrderPrint(subtreeRoot->GetRight());
	}

	return out.str();
}

template <typename T>
void Tree<T>::DeleteSubTree (Node<T>* subtreeRoot)
{
	if (subtreeRoot != nullptr)
	{
		this->DeleteSubTree(subtreeRoot->GetLeft());
		this->DeleteSubTree(subtreeRoot->GetRight());
		delete subtreeRoot;
	}
}

template <typename T>
Tree<T>::~Tree ()
{
	this->DeleteSubTree(this->root);
}

template class Tree<int>;
