#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "Course.h"

using namespace std;

class LanguageCourse : public Course
{
protected:
	char gradeSpoken;
	char gradeWritten;
public:

	LanguageCourse(void)
	{
		this->gradeSpoken='F';
		this->gradeWritten='F';
	}
	LanguageCourse(char spoken,char written){this->gradeSpoken=spoken; this->gradeWritten=written;}

	char getSpoken(){return this->gradeSpoken;}
	void setSpoken(char spoken){this->gradeSpoken=spoken;}

	char getWritten(){return this->gradeWritten;}
	void setWritten(char written){this->gradeWritten=written;}

};

