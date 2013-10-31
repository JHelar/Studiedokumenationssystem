#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "Course.h"
#include "English.h"
#include "Swedish.h"
#include "Mathematics.h"
#include "Result.h"

using namespace std;

class Student : public vector<Course*>
{
private:

	string firstName;
	string secondName;
	int enrollmentYear;

public:

	Student(void)
	{
		this->firstName = "";
		this->secondName = "";
		this->enrollmentYear = 0;
	}

	Student(string firstName,string secondName,int enrollmentYear)
	{
		this->firstName=firstName;
		this->secondName=secondName;
		this->enrollmentYear=enrollmentYear;
	}

	string getFirstName(){return this->firstName;}
	void setFirstName(string firstName){this->firstName = firstName;}

	string getSecondName(){return this->secondName;}
	void setSecondName(string secondName){this->secondName=secondName;}

	int getEnrollmenYear(){return this->enrollmentYear;}
	void setEnrollmentYear(int enrollmentYear){this->enrollmentYear=enrollmentYear;}

	/*void Read()
	{
		string temp;
		cout<<"First name: ";
		getline(cin,this->firstName,'\n');
		cout<<"Second name: ";
		getline(cin,this->secondName,'\n');
		cout<<"Enrollment year: ";
		getline(cin,temp,'\n');
		stringstream myStream(temp);
		myStream >> this->enrollmentYear;
	}

	void Write()
	{
		cout<<"First name: "<<this->firstName<<"\nSecond name: "<<this->secondName<<"\nEnrollment year: "<<this->enrollmentYear;
	}


	friend ostream& operator << (ostream& out,Student& student)
	{
		out<<"("<<student.firstName<<","<<student.secondName<<","<<student.enrollmentYear<<")"<<"("<<student.size();
		for(int i=0;i<student.size();i++)
		{
			out<<"("<<student[i].courseName<<","<<student[i].year<<","<<student[i].size()<<":";
			for(int j=0;j<student[i].size();j++)
			{
				out<<"("<<student[i][j].name<<","<<student[i][j].result<<")";
			}
			out<<")";
		}
		out<<")";

		return out;
	}

	friend istream& operator >> (istream& in, Student& student)
	{
		int courses;
		int results;
		char dummy;
		Course tempCourse;
		Course emptyCourse;
		Result tempResult;
		Result emptyResult;

		in>>dummy;
		getline(in,student.firstName,',');
		getline(in,student.secondName,',');
		in>>student.enrollmentYear;
		in>>dummy;
		in>>dummy;
		in>>courses;
		for(int i=0;i<courses;i++)
		{
			in>>dummy;
			getline(in,tempCourse.courseName,',');
			in>>tempCourse.year;
			in>>dummy;
			in>>results;
			in>>dummy;
			for(int j=0;j<results;j++)
			{
				in>>dummy;
				getline(in,tempResult.name,',');
				in>>tempResult.result;
				in>>dummy;
				tempCourse.AddResult(tempResult);
				tempResult=emptyResult;
			}
			student.AddCourse(tempCourse);
			in>>dummy;
			tempCourse=emptyCourse;
		}
		in>>dummy;
		
		return in;
	}

	friend bool operator == (Student& one,Student& another)
	{
		if(one.firstName == another.firstName)
			if(one.secondName == another.secondName)
				if(one.enrollmentYear == another.enrollmentYear)
					return true;
		return false;
	}

	friend bool operator != (Student& one,Student& another)
	{
		if(one == another)
			return false;
		else
			return true;
	}*/

	void AddEngCourse(English course){(*this).push_back(new English(course));}
	void AddSweCourse(Swedish course){(*this).push_back(new Swedish(course));}
	void AddMathCourse(Mathematics course){(*this).push_back(new Mathematics(course));}
};

