#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList
{
	public:
		int size = 0;
		Node* head;
		Node* tail;

	public:
		LinkedList();
		~LinkedList();

		int getSize();
		void printList();
		void insertNode(Node* node, int position);
		void deleteNode(int studentId);
		Node* searchNode(int studentId);
};

