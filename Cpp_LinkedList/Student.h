#pragma once 
#include <iostream>
using namespace std;

class Student
{
	public:
		int id;
		string name;

	public:
		Student() : Student(0, "") {};
		Student(int id, string name);
		~Student();

		void printInfo();
};

