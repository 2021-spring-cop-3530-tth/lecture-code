#include "heap.hpp"

int Heap::GetParent (int nodeIndex)
{
	if (nodeIndex <= 0)
	{
		return -1;
	}
	return (nodeIndex - 1) / 2;
}

int Heap::GetLeft (int nodeIndex)
{
	return (nodeIndex * 2) + 1;
}

int Heap::GetRight (int nodeIndex)
{
	return this->GetLeft(nodeIndex) + 1;
}


void Heap::Insert (int value)
{
	// shape
	this->tree.push_back(value);

	// heap property
	// percolate
	this->Percolate(this->tree.size() - 1);
}

void Heap::Percolate (int id)
{
	if (id == 0)
	{
		return;
	}

	// if bigger than parent, swap and move up
	if (this->tree.at(id) > this->tree.at(this->GetParent(id)))
	{
		this->Swap(id, this->GetParent(id));
		this->Percolate(this->GetParent(id));
	}
}

void Heap::Swap (int i, int j)
{
	int temp = this->tree.at(i);
	this->tree.at(i) = this->tree.at(j);
	this->tree.at(j) = temp;
}

int Heap::Peek ()
{
	// error checking
	return this->tree.at(0);
}

int Heap::Pop ()
{
	int returnValue = this->tree.at(0);
	this->tree.at(0) = this->tree.at(this->tree.size() - 1);
	this->tree.pop_back();
	this->PercolateDown(0);

	return returnValue;
}

void Heap::PercolateDown (int index)
{
	// find the max child
	// if has at least one child
	if (this->GetLeft(index) < this->tree.size())
	{
		int childNode = this->GetLeft(index);

		if (this->GetRight(index) < this->tree.size())
		{
			if (this->tree.at(childNode)
				< this->tree.at(this->GetRight(index)))
			{
				childNode = this->GetRight(index);
			}
		}

		// compare parent with max child
		if (this->tree.at(childNode) > this->tree.at(index))
		{
			this->Swap(childNode, index);
			// recurse if necessary
			this->PercolateDown(childNode);
		}
	}
}
