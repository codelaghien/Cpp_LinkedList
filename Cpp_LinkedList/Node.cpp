#include "Node.h" 

Node::Node(Student student) {
	this->student = student;
	this->next = NULL;
}
Node::~Node() {
	if (this->next != NULL) delete this->next;
}
void Node::printData() {
	this->student.printInfo();
}