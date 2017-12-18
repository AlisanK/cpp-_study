#pragma once

template <class T> class Queue;
#include "Q_node.h"

template <class T>
class Queue
{
public:
	Queue();                                      
	void add_node(const T &);    

	T pop_node();   
	T get_head();                         
	T get_tail();
	void Queue_Dump();
private:
	Qnode<T>* head;
	Qnode<T>* tail;
	int length;
};

template<class T>
Queue<T>::Queue()
{
	head = tail = nullptr;
	length = 0;
}

template<class T>
void Queue<T>::add_node(const T &x)
{
	QNode* new_node = new QNode();

	QNode(new_node);

	new_node->value = x;

	if (this->length == 0) {
		this->head = new_node;
		this->tail = new_node;
	}
	else {
		this->tail->next = new_node;
	}
	this->tail = new_node;
	this->length++;
}


template<class T>
T* Queue<T>::pop_node()
{
	this->length--;
	T value = this->head->value;
	this->head = this->head->next;
	return value;
}

template<class T>
T* Queue<T>::get_head()
{
	return head->value;
}

template<class T>
T* Queue<T>::get_tail()
{
	return tail->value;
}

template<class T>
void Queue<T>::Queue_Dump()
{
	QNode* current = Q->head;
	std::cout << "===============Queue=DUMP==============" << std::endl;
	std::cout << "List length:" << Q->length << std::endl;
	while (current) {
		QDump(current);
		current = current->next;
	}
	std::cout << "===========End=of=Queue=DUMP===========" << std::endl;
}
