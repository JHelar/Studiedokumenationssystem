#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "Course.h"
#include "CourseException.h"

using namespace std;

class Mathematics : public Course
{
private:
	char grade;
public:

	Mathematics(void)
	{
		this->grade='F';
	}

	Mathematics(char grade,string courseName,int courseYear){this->grade=grade; this->courseName = courseName; this->year=courseYear;}
	
	char getGrade(){return this->grade;}
	void setGrade(char grade){this->grade = grade;}

	void setMath(char grade,string courseName,int courseYear)
	{
		this->grade=grade;
		this->courseName = courseName; 
		this->year=courseYear; 
		if(grade > 'F')
			throw coursEx;
	}

	void Print(ostream& out){out<<*this;}

	friend ostream& operator << (ostream& out,Mathematics math)
	{
		out<<"Course: "<<math.getCourseName()<<"\nCourse year: "<<math.getCourseYear()<<"\nGrade: "<<math.getGrade();
		return out;
	}
};

