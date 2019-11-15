// ps_cpp_datastructures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "linkedlist.h"
#include "doublelinkedlist.h"


void testLinkedList()
{
	LinkedList* exllist = new LinkedList(1);
	exllist->addNode(3);
	exllist->addNode(10);
	exllist->addNode(2);

	LinkedList* exllist2 = new LinkedList();//without first element
	exllist2->addNode(3);
	exllist2->addNode(10);
	exllist2->addNode(2);
	exllist2->printLinkedList();

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

	//testLinkedList();
	//testDoubleLinkedList();



    return 0;
}

