#include "stdafx.h"
#include "doublelinkedlist.h"
#include "iostream"

using namespace std;

void DoubleLinkedList::addNode(int currdata) {
	DoubleNode* newNode = new DoubleNode(currdata);
	
	this->tail->next = newNode;
	newNode->prev    = this->tail;
	this->tail       = newNode;

}

void DoubleLinkedList::printOrder(bool inOrder) {
	
	if (inOrder)
	{
		DoubleNode* curr = this->head;
		while (curr != NULL)
		{
			cout << curr->data << endl;
			curr = curr->next;
		}
	}
	else
	{
		DoubleNode* curr = this->tail;
		while (curr != NULL)
		{
			cout << curr->data << endl;
			curr = curr->prev;
		}
	}
}

void DoubleLinkedList::printReverseOrder() {



}