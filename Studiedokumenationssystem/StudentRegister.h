#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

#include "Student.h"

using namespace std;

class StudentRegister
{
private:
	vector<Student> v;

public:

	/*void Add(Student student)
	{
		v.push_back(student);
	}

	void Remove(int studentIndex)
	{
		v.erase(v.begin()+studentIndex -1);
	}

	void AddCourse(int studentIndex,Course course)
	{
		v[studentIndex -1].AddCourse(course);
	}

	void AddCourseResult(int studentIndex,string courseName,Result result)
	{
		for(int i=0;i<v[studentIndex -1].size();i++)
		{
			if(v[studentIndex -1][i].courseName.compare(courseName)==0)
			{
				v[studentIndex -1][i].AddResult(result);	
				break;
			}
		}
	}

	string List()
	{
		ostringstream oss;

		for(int i=0;i<v.size();i++)
		{
			oss<<i+1<<": "<<v[i]<<endl;
		}
		return oss.str();
	}

	void WriteToFile(string fileName)
	{
		ofstream MyFile;

		MyFile.open(fileName);
		for(int i=0;i<v.size();i++)
		{
			MyFile<<v[i];
			MyFile<<endl;
		}
		MyFile.close();
	}

	void ReadFromFile(string fileName)
	{
		ifstream MyFile;

		Student tempStudent;
		Student emptyStudent;

		MyFile.open(fileName);
		while(!MyFile.eof())
		{
			MyFile>>tempStudent;
			if(tempStudent == emptyStudent)
				break;
			else
			{
				v.push_back(tempStudent);
				tempStudent = emptyStudent;
			}
		}
		MyFile.close();
	}*/


};

