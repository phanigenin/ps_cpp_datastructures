// ps_cpp_datastructures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "linkedlist.h"
#include "doublelinkedlist.h"
#include "linkedlist.cpp"

#define __GXX_WEAK__ 1
//#define __cplusplus 1
#define __DEPRECATED 1
#define __GNUG__ 4
#define __EXCEPTIONS 1
#define __private_extern__ extern

void testLinkedList()
{
	LinkedList<int>* exllist = new LinkedList<int>(1);
	exllist->addNode(3);
	exllist->addNode(10);
	exllist->addNode(2);
	exllist->printLinkedList();

	cout << "break" << endl;

	LinkedList<int>* exllist2 = new LinkedList<int>();//without first element
	exllist2->addNode(3.45);
	exllist2->addNode(10);
	exllist2->addNode(2);
	exllist2->printLinkedList();


	LinkedList<double>* exllist3 = new LinkedList<double>();//without first element
	exllist3->addNode(3.45);
	exllist3->addNode(10);
	exllist3->addNode(2);
	exllist3->printLinkedList();


}

void testDoubleLinkedList()
{
	DoubleLinkedList* exllist = new DoubleLinkedList(1);
	exllist->addNode(3);
	exllist->addNode(10);
	exllist->addNode(2);
	exllist->printOrder(false);

	/*
	LinkedList* exllist2 = new LinkedList();//without first element
	exllist2->addNode(3);
	exllist2->addNode(10);
	exllist2->addNode(2);
	exllist2->printLinkedList();*/

}

int main()
{

	testLinkedList();
	//testDoubleLinkedList();



    return 0;
}

