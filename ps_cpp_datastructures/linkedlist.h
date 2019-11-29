#pragma once

template <typename T>
class Node {
public:
	T data;
	Node* next;

	Node(T input)
	{
		data = input;
	}
	
};


template <typename T>
class LinkedList {

public:
	Node<T>* head;
	Node<T>* last;

	LinkedList(T headData)
	{
		head = new Node<T>(headData);
		last = head;
	}

	LinkedList()
	{
		head = NULL;
		last = NULL;
	}

	void addNode(T nextData);
	Node<T>* getLastNode()
	{
		return this->last;
	}

	void printLinkedList();
};

