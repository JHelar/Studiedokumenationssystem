#include <iostream>
#include <string>
#include <sstream>
#include <exception>

#include "Student.h"
#include "StudentRegister.h"
#include "Course.h"
#include "Result.h"
#include "English.h";
#include "Swedish.h"
#include "Mathematics.h"
#include "CourseException.h"

using namespace std;

//void main3_1()
//{
//	Student student("Karl","Olsson",2002);
//	cout<<"First name: "<<student.getFirstName()<<"\nSecond name: "<<student.getSecondName()<<"\nEnrollment Year: "<<student.getEnrollmenYear();
//}
//
//void main3_2()
//{
//	Student student;
//	student.Read();
//	student.Write();
//	cin.get();
//}
//
//void main3_3()
//{
//	Student student;
//	cout<<"(first name,second name,enrollment year)=";
//	cin>>student;
//	cout<<"(first name,second name,enrollment year)=";
//	cout<<student;
//	cin.get();
//}
//
//void main3_4()
//{
//	Student student1("Karl","Olsson",2002);
//	Student student2("Karl","Olsson",2003);
//	Student student3("Karl","Olsson",2004);
//	StudentRegister studentReg;
//	studentReg.Add(student1);
//	studentReg.Add(student2);
//	studentReg.Add(student3);
//	cout<<studentReg.List();
//}
//
//void main3_5()
//{
//	Student student1("Karl","Olsson",2002);
//	Student student2("Karl","Olsson",2003);
//	Student student3("Karl","Olsson",2004);
//	StudentRegister studentReg;
//	studentReg.Add(student1);
//	studentReg.Add(student2);
//	studentReg.Add(student3);
//	studentReg.WriteToFile("StudentRegister.txt");
//}
//
//void main3_6()
//{
//	StudentRegister studentReg;
//	studentReg.ReadFromFile("StudentRegister.txt");
//	cout<<studentReg.List();
//	cin.get();
//}
//
//void main4()
//{
//	bool active=true;
//	int choice;
//	int indx;
//	string courseName,mychoice,temp;
//	StudentRegister studentReg;
//	Student tempStudent;
//	Student emptyStudent;
//	Course tempCourse;
//	Course emptyCourse;
//	Result tempResult;
//	Result emptyResult;
//	while(active)
//	{
//		cout<<"\nStudent registry:";
//		cout<<"\n1. Add student";
//		cout<<"\n2. Remove student";
//		cout<<"\n3. Add course to student";
//		cout<<"\n4. Add result to course to student";
//		cout<<"\n5. Save students";
//		cout<<"\n6. Load students";
//		cout<<"\n7. Exit";
//		cout<<"\nChoice: ";
//		getline(cin,mychoice,'\n');
//		stringstream myStream(mychoice);
//		myStream >> choice;
//		switch(choice)
//		{
//		case 1:
//			cout<<endl;
//			tempStudent.Read();
//			studentReg.Add(tempStudent);
//			tempStudent=emptyStudent;
//			cout<<"(first name,second name,enrollment year)(amount of courses(course name,amount of results(result name,result)))\n";
//			cout<<studentReg.List();
//			break;
//		case 2:
//			cout<<endl<<"Choose a student to remove: \n";
//			cout<<"(first name,second name,enrollment year)(amount of courses(course name,amount of results(result name,result)))\n";
//			cout<<studentReg.List();
//			getline(cin,temp,'\n');
//			myStream.clear();
//			myStream.str(temp);
//			myStream >> indx;
//			studentReg.Remove(indx);
//			cout<<"(first name,second name,enrollment year)(amount of courses(course name,amount of results(result name,result)))\n";
//			cout<<studentReg.List();
//			break;
//		case 3:
//			cout<<endl<<"Choose what student to add a course to: \n";
//			cout<<"(first name,second name,enrollment year)(amount of courses(course name,amount of results(result name,result)))\n";
//			cout<<studentReg.List();
//			getline(cin,temp,'\n');
//			myStream.clear();
//			myStream.str(temp);
//			myStream >> indx;
//			cout<<endl;
//			tempCourse.Read();
//			studentReg.AddCourse(indx,tempCourse);
//			tempCourse=emptyCourse;
//			cout<<"(first name,second name,enrollment year)(amount of courses(course name,amount of results(result name,result)))\n";
//			cout<<studentReg.List();
//			break;
//		case 4:
//			cout<<endl<<"Choose what student to add a course result to: \n";
//			cout<<"(first name,second name,enrollment year)(amount of courses(course name,amount of results(result name,result)))\n";
//			cout<<studentReg.List();
//			getline(cin,temp,'\n');
//			myStream.clear();
//			myStream.str(temp);
//			myStream >> indx;
//			cout<<endl<<"Type in the name of the course: \n";
//			getline(cin,courseName,'\n');
//			tempResult.Read();
//			studentReg.AddCourseResult(indx,courseName,tempResult);
//			tempResult=emptyResult;
//			cout<<"(first name,second name,enrollment year)(amount of courses(course name,amount of results(result name,result)))\n";
//			cout<<studentReg.List();
//			break;
//		case 5:
//			cout<<endl;
//			studentReg.WriteToFile("StudentRegister.txt");
//			break;
//		case 6:
//			cout<<endl;
//			studentReg.ReadFromFile("StudentRegister.txt");
//			cout<<"(first name,second name,enrollment year)(amount of courses(course name,amount of results(result name,result)))\n";
//			cout<<studentReg.List();
//			break;
//		case 7:
//			active = false;
//			break;
//		default:
//			active=true;
//			break;
//		}
//	}
//}

void Print(Course &c)
{
	c.Print(cout);
}

void main5()
{
	Course course;
	Student student;
	Mathematics math;
	Mathematics mathException;
	Swedish swe;
	English eng;
	char grade='F';
	swe.setSwedish(true,'A','A',"Swedish",2008);
	eng.setEnglish('A','A',"English",2009);
	try
	{
		math.setMath('A',"Math",2009);
		mathException.setMath('Q',"Math",2009);
	}
	catch(CourseException& e)
	{
		cout<<e.what();
		cout<<endl;
	}

	student.AddMathCourse(math);
	student.AddSweCourse(swe);
	student.AddEngCourse(eng);
	for(int i=0;i<student.size();i++)
	{
		cout<<endl;
		student[i]->Print(cout);
		cout<<endl;
	}

	Print(swe);
	
}

int main()
{
	//main3_1();
	//main3_2();
	//main3_3();
	//main3_4();
	//main3_5();
	//main3_6();
	//main4();
	main5();
	cin.get();
	return 0;
}

