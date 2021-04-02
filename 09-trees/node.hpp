#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node
{
	private:
		T value;
		Node<T>* parent;
		Node<T>* left;
		Node<T>* right;
	public:
		Node (int);
		T GetValue ();
		void SetParent (Node<T>* p);
		Node<T>* GetParent ();

		void SetLeft (Node<T>*);
		Node<T>* GetLeft ();

		void SetRight (Node<T>*);
		Node<T>* GetRight ();
};

#endif /*NODE_HPP*/
