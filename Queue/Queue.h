#pragma once

template <class T> class Queue;
#include "Q_node.h"

template <class T>
class Queue
{
public:
	Queue();                                      
	void add_node(const T &);    

	Qnode<T>* pop_node(Qnode<T> *);   
	Qnode<T>* get_head();                         
	Qnode<T>* get_tail();
	Qnode<T>* Queue_Dump();
private:
	Qnode<T> *head;
	Qnode<T> *tail;
	int length;
};

template<class T>
Queue<T>::Queue()
{
	head = tail = 0;
	length = 0;
}

template<class T>
Queue<T>::add_node(const T &x)
{
	QNode* new_node = new QNode;

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
	return;
}


template<class T>
Queue<T>* Queue<T>::pop_node(Qnode<T> *value)
{
	this->length--;
	int value = this->head->value;
	this->head = this->head->next;
	return value;
}

template<class T>
Qnode<T>* Queue<T>::get_head()
{
	return head;
}

template<class T>
Qnode<T>* Queue<T>::get_tail()
{
	return tail;
}

template<class T>
Qnode<T>* Queue<T>::Queue_Dump()
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
