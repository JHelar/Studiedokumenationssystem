#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Result.h"

using namespace std;

class Course : public vector<Result>
{
public:

	string courseName;
	int year;

public:

	Course(){this->courseName="";}
	Course(string name){this->courseName=name;}

	string getCourseName(){return this->courseName;}
	int getCourseYear(){return this->year;}

	void Read()
	{
		string temp;
		cout<<"Course name: ";
		getline(cin,this->courseName,'\n');
		cout<<"Course year: ";
		getline(cin,temp,'\n');
		stringstream myStream(temp);
		myStream >> this->year;
	}

	void AddResult(Result result)
	{
		push_back(result);
	}

	virtual void Print(ostream &out){}
};

