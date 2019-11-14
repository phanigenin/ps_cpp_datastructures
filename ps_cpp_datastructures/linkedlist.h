#pragma once
class Node {
public:
	int data;
	Node* next;

	Node(int input)
	{
		data = input;
	}
	
};


class LinkedList {

public:
	Node* head;
	Node* last;

	LinkedList(int headData)
	{
		head = new Node(headData);
		last = head;
	}

	LinkedList()
	{
		head = NULL;
		last = NULL;
	}

	void addNode(int nextData);
	Node* getLastNode()
	{
		return this->last;
	}

	void printLinkedList();
};