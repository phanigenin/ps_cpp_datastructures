
#include "stdafx.h"
#include "iostream"
#include "linkedlist.h"

using namespace std;

/*
void Node::printList(Node *n)
{
	while (n != NULL)
	{
		cout << n->data << endl;
		n = n->next;
    }
}
*/
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

void LinkedList::printLinkedList()
{
	Node* curr = this->head;
	while (curr!=NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}