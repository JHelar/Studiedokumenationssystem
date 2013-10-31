#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "LanguageCourse.h"

using namespace std;
class English : public LanguageCourse
{
public:

	English(void)
	{
	}

	English(char spoken,char written,string courseName,int year){this->gradeSpoken=spoken; this->gradeWritten=written;this->courseName=courseName;this->year=year;}
	~English(void)
	{
	}

	void setEnglish(char spoken,char written,string courseName,int year){this->gradeSpoken=spoken; this->gradeWritten=written;this->courseName=courseName;this->year=year;}
	
	void Print(ostream &out)
	{
		out<<*this;
	}

	friend ostream& operator << (ostream& out, English english)
	{
		out<<"Course: "<<english.getCourseName()<<"\nCourse year: "<<english.getCourseYear()<<"\nGrade spoken: "<<english.getSpoken()<<"\nGrade written: "<<english.getWritten(); 
		return out;
	}
};

