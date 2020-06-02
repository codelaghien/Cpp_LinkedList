#pragma once
#include <iostream>
#include "Student.h"

class Node
{
	public:
		Student student;
		Node* next = NULL;

	public: 
		Node(Student student);
		~Node();

		void printData();
};

