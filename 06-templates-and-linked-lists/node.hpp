#ifndef NODE_HPP
#define NODE_HPP

template <typename DataType>
class Node
{
	private:
		DataType payload;
		Node<DataType>* next;
	public:
		Node (DataType data, Node<DataType>* next = nullptr);
		DataType GetData ();
		Node<DataType>* GetNext ();
};

#endif
