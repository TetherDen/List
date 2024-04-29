#pragma once
#include "Node.h"
class List
{
	Node* _head;
	Node* _tail;
	unsigned int _size;
public:
	List();

	void show()const;
	void addHead(const int data);
	void addTail(const int data);

	void deleteHead();
	void deleteTail();
	void deleteAll();

	~List();

};

