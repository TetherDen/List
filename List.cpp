#include "List.h"
#include<iostream>
using namespace std;

List::List() :_head(nullptr), _size(0), _tail (nullptr)
{

}



void List::addHead(const int data)
{
	Node* node = new Node(data);
	if (_size > 0)
	{
		_head->_prev = node;
		node->_next = _head;
		_head = node;
	}
	else
	{
		_head = node;
		_tail = node;
	}
	_size++;

}

void List::addTail(const int data)
{
	Node* node = new Node(data);
	if (_size > 0)
	{
		_tail->_next = node;
		node->_prev = _tail;
		_tail = node;
	}
	else
	{
		_head = node;
		_tail = node;
	}
	_size++;
}

void List::deleteHead()
{
	if (_head != nullptr)
	{
		Node* temp = _head;
		_head = _head->_next;
		delete temp;
		_size--;
	}
}

void List::deleteTail()
{
	if (_tail != nullptr)
	{
		Node* temp = _tail;
		_tail = _tail->_prev;
		if (_tail != nullptr)
		{
			_tail->_next = nullptr;
		}
		else
		{
			_head = nullptr;
		}
		delete temp;
		_size--;
	}
}

void List::deleteAll()
{
	while (_head != nullptr)
	{
		deleteHead();
	}
}

List::~List()
{
	deleteAll();
}

void List::show()const
{
	Node* node = _head;
	while (node != nullptr)
	{
		cout << node->_data<<" ";
		node = node->_next;
	}
	cout << endl;
}
