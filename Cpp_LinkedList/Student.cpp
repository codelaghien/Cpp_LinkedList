#include "Student.h"

Student::Student(int id, string name) {
	this->id = id;
	this->name = name;
}
Student::~Student() {
	//
}
void Student::printInfo() {
	cout << "id: " << this->id << ", name: " << this->name ;
}
