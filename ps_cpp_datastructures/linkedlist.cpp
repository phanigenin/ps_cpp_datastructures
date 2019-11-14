
#include "stdafx.h"
#include "iostream"
#include "linkedlist.h"

using namespace std;

// add a Node to Linkedlist. if it is empty, create headnode
void LinkedList::addNode(int nextData)
{
	if (this->head == NULL)
	{
		this->head = new Node(nextData);
		this->last = this->head;
		return;
	}

	Node* nextnode = new Node(nextData);
	this->getLastNode()->next = nextnode;
	this->last = nextnode;
}

// traverse a given LinkedList.
void LinkedList::printLinkedList()
{
	Node* curr = this->head;
	while (curr!=NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}