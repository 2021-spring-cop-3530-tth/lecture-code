#ifndef LIST_HPP
#define LIST_HPP
#include "node.hpp"

template <typename DataType>
class List
{
	private:
		Node<DataType>* head;
	public:
		List ();
		~List ();
		void InsertAtHead (DataType value);
		Node<DataType>* Peek ();
		void DeleteFromHead ();
};

#endif
