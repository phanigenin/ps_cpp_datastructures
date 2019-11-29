
#include "stdafx.h"
#include "iostream"
#include "linkedlist.h"

using namespace std;

// add a Node to Linkedlist. if it is empty, create headnode
template <typename T>
void LinkedList<T>::addNode(T nextData)
{
	if (this->head == NULL)
	{
		this->head = new Node<T>(nextData);
		this->last = this->head;
		return;
	}

	Node<T>* nextnode = new Node<T>(nextData);
	this->getLastNode()->next = nextnode;
	this->last = nextnode;
}

// traverse a given LinkedList.
template <typename T>
void LinkedList<T>::printLinkedList()
{
	Node<T>* curr = this->head;
	while (curr!=NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}

/*
void TemporaryFunction()
{
	LinkedList<int> TempObj;
}
*/