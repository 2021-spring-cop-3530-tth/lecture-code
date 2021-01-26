#include "student.hpp"

Student::Student () {}
Student::Student (double gpa, std::string fName, std::string lName)
{
	this->gpa = gpa;
	this->firstName = fName;
	this->lastName = lName;
}

std::string Student::ToString ()
{
	return this->lastName + ", " + this->firstName + ": " + std::to_string(this->gpa);
}
