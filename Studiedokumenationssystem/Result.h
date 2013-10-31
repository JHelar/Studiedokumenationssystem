#pragma once

#include <iostream>
#include <string>
#include <sstream>

#include "Course.h"

using namespace std;
class Result
{
public:
	int result;
	string name;
public:
	Result(){}
	Result(int result,string name){this->result=result; this->name=name;}

	int getResult(){return this->result;}
	void setResult(int result){this->result = result;}

	string getName(){return this->name;}
	void setName(string name){this->name = name;}

	void Read()
	{
		string temp;
		stringstream myStream;
		cout<<"Result name: ";
		getline(cin,this->name,'\n');
		cout<<"Result: ";
		getline(cin,temp,'\n');
		myStream.str(temp);
		myStream >> this->result;
	}
};

