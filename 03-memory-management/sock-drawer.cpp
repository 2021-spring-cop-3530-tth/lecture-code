#include "sock-drawer.hpp"

SockDrawer::SockDrawer (int capacity)
{
	this->capacity = capacity;
	this->socks = new std::string[capacity];
}

SockDrawer::~SockDrawer ()
{
	delete [] this->socks;
}

SockDrawer::SockDrawer (const SockDrawer& rhs)
{
	this->capacity = rhs.capacity;
	this->socks = new std::string[this->capacity];

	for (int i = 0; i < this->capacity; ++i)
	{
		this->socks[i] = rhs.socks[i];
	}
}

SockDrawer SockDrawer::operator = (const SockDrawer& rhs)
{
	this->capacity = rhs.capacity;
	this->socks = new std::string[this->capacity];

	for (int i = 0; i < this->capacity; ++i)
	{
		this->socks[i] = rhs.socks[i];
	}

	return *this;
}
