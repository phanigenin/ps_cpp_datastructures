#pragma once

class DoubleNode {
public:
	int data;
	DoubleNode* prev;
	DoubleNode* next;

	DoubleNode(int data)
	{
		this->data = data;
		this->prev = NULL;
		this->next = NULL;
	}
};


class DoubleLinkedList {
public:
	DoubleNode* head;
	DoubleNode* tail;

	DoubleLinkedList(int data)
	{
		DoubleNode* curr = new DoubleNode(data);
		head = curr;
		tail = curr;
	}

	void addNode(int currdata);
	void printOrder(bool inOrder=true);
	void printReverseOrder();
};