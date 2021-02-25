#include "node.hpp"

template <typename DataType>
Node<DataType>::Node (DataType data, Node<DataType>* next)
{
	this->payload = data;
	this->next = next;
}

template <typename DataType>
DataType Node<DataType>::GetData ()
{
	return this->payload;
}

template <typename DataType>
Node<DataType>* Node<DataType>::GetNext ()
{
	return this->next;
}

template class Node<int>;
