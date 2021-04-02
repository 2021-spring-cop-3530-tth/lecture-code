#include "node.hpp"

template <typename T>

Node<T>::Node (int v)
{
	this->value = v;
	this->parent = nullptr;
	this->left = nullptr;
	this->right = nullptr;
}

template <typename T>
T Node<T>::GetValue()
{
	return this->value;
}

template <typename T>
void Node<T>::SetParent (Node<T>* p)
{
	this->parent = p;
}

template <typename T>
Node<T>* Node<T>::GetParent ()
{
	return this->parent;
}

template <typename T>
void Node<T>::SetLeft (Node<T>* l)
{
	this->left = l;
}

template <typename T>
Node<T>* Node<T>::GetLeft ()
{
	return this->left;
}

template <typename T>
void Node<T>::SetRight (Node<T>* r)
{
	this->right = r;
}

template <typename T>
Node<T>* Node<T>::GetRight ()
{
	return this->right;
}

template class Node<int>;
