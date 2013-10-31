#pragma once

#include <iostream>
#include <exception>
using namespace std;

class CourseException : public exception
{
public:
	virtual const char* what() const throw()
	{
		return "Exception thrown!\nGrades can only be A - F!";
	}

}coursEx;

