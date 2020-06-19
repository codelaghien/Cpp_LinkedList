#include "LinkedList.h"

LinkedList::LinkedList() {
	this->size = 0;
	this->head = NULL;
	this->tail = NULL;
}
LinkedList::~LinkedList() {
	while (this->head != NULL) { 
		Node* currentNode = this->head;
		this->head = this->head->next;
		delete currentNode;
	}
}
int LinkedList::getSize() {
	return this->size;
}
void LinkedList::printList() {
	cout << "Linked List: " << endl;
	cout << "Size: " << this->size << endl;

	Node* currentNode = this->head;
	while (currentNode != NULL) {
		currentNode->printData();
		cout << endl;
		currentNode = currentNode->next;
	}
}
void LinkedList::insertNode(Node* node, int position) {
	if (this->head == NULL || position < 1) {
		// insert in front
		node->next = this->head; 
		this->head = node; 
		if (this->tail == NULL) {
			this->tail = node;
		}
		this->size++;
		return;
	}

	if (position >= this->size) {
		// insert after tail 
		this->tail->next = node;
		this->tail = node;
		this->size++;
		return;
	}

	Node* preNode = NULL;
	Node* currentNode = this->head;
	int pos = 0;
	while (pos < position) {
		pos++; 
		preNode = currentNode;
		currentNode = currentNode->next;
	}
	node->next = currentNode;
	preNode->next = node;
	this->size++;
}
void LinkedList::deleteNode(int studentId) {
	if (this->head == NULL) return;

	Node* preNode = NULL;
	Node* currentNode = this->head; 
	while (currentNode != NULL) {
		if (currentNode->student.id == studentId) { 
			if (preNode == NULL) {
				// delete front
				this->head = this->head->next;
				if (this->head == NULL) {
					this->tail = NULL;
				} 
			}
			else if (this->tail == currentNode) {
				// delete last
				if (preNode != NULL) {
					preNode->next = NULL;
				}
				this->tail = preNode;
			}
			else {
				// delete in the middle
				preNode->next = currentNode->next;
			}
			delete currentNode;
			this->size--;
			return;
		}
		preNode = currentNode;
		currentNode = currentNode->next;
	}
}
Node* LinkedList::searchNode(int studentId) {
	Node* currentNode = this->head;
	while (currentNode != NULL) { 
		if (currentNode->student.id == studentId) {
			return currentNode;
		}
		currentNode = currentNode->next;
	}
	cout << "Khong tim ra student id (" << studentId << ")" << endl;
	return NULL;
}
