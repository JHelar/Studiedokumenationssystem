#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "LanguageCourse.h"

using namespace std;
class Swedish : public LanguageCourse
{
private:
	bool motherTongue;
public:
	Swedish(bool motherTongue,char spoken,char written,string courseName,int year){this->gradeSpoken=spoken; this->gradeWritten=written;this->courseName=courseName;this->year=year;this->motherTongue=false;}
	Swedish(){}

	bool getMotherTongue(){return this->motherTongue;}
	void setMotherTongue(bool motherTongue){this->motherTongue=motherTongue;}

	void setSwedish(bool motherTongue,char spoken,char written,string courseName,int year){this->gradeSpoken=spoken; this->gradeWritten=written;this->courseName=courseName;this->year=year;this->motherTongue=false;}

	void Print(ostream &out){out<<*this;}

	friend ostream& operator << (ostream& out, Swedish swedish)
	{
		out<<"\nCourse: "<<swedish.getCourseName()<<"\nCourse year: "<<swedish.getCourseYear()<<"\nMother tongue: ";
		if(swedish.getMotherTongue())
			out<<"Yes";
		else
			out<<"No";
		out<<"\nGrade spoken: "<<swedish.getSpoken()<<"\nGrade written: "<<swedish.getWritten();
		return out;
	}
};

