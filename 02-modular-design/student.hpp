#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>

class Student
{
	private:
		double gpa;
		std::string firstName;
		std::string lastName;
	public:
		Student ();
		Student (double gpa, std::string fName, std::string lName);
		std::string ToString ();
};

#endif
