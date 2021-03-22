#include "student.hpp"

Student::Student (int id, std::string name)
{
	this->id = id;
	this->name = name;
}

int Student::GetId () const
{
	return this->id;
}

std::string Student::GetName () const
{
	return this->name;
}

bool Student::operator == (const Student& otherStudent) const
{
	return this->id == otherStudent.GetId()
		&& this->name == otherStudent.GetName();
}
