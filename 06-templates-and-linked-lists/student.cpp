#include "student.hpp"

template <typename GradeType>
Student<GradeType>::Student (GradeType g)
{
	this->grade = g;
}

//template for each function

template class Student<int>;
template class Student<char>;
template class Student<double>;
