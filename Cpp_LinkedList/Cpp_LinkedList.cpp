// Cpp_LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
#include "LinkedList.h"
#include "Student.h"
#include "Node.h"

using namespace std;

int main()
{
    cout << "Linked List - C++ \n";
    cout << "----------------- \n";

    LinkedList *list = new LinkedList();
    list->insertNode(new Node(Student(1, "Huy")), 0);
    list->insertNode(new Node(Student(2, "Nguyen")), 10);
    list->insertNode(new Node(Student(30, "Ba muoi")), 3);
    list->insertNode(new Node(Student(40, "Bon muoi")), 7);

    list->insertNode(new Node(Student(5, "Nam")), 2);
    list->insertNode(new Node(Student(3, "3")), 1);

    list->printList();

    cout << endl << "Tim " << endl;
    Node* tim = list->searchNode(1);
    if (tim != NULL) {
        tim->printData();
    }

    cout << endl << endl << "Sau khi xoa 1 node " << endl;
    list->deleteNode(40);
    list->printList();

    cout << endl << endl << endl;
    system("PAUSE");
    //int c = _getch();
    return 0;
}

