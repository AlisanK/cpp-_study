#pragma once

template <class T> class QNode
{
	friend class Queue<T>;
public:
	QNode(const T &);
	~QNode();
	T get_value();
	T QNode_Dump();

protected:
	QNode* next;         
	T value;           
	
};

template<class T>
QNode <T>::QNode(const T &a)
{
	value = a;
	next = 0;
}

template <class T>
T QNode <T>::get_value()
{
	return value;
}

template <class T>
QNode <T>::~QNode()
{

}

template <class T>
T QNode <T>::QNode_Dump()
{
	std::cout << "===============QNode=DUMP==============" << std::endl;

	std::cout << "Node address: " << this << std::endl;

	std::cout << "Node->value:  " << this->value << std::endl;
	std::cout << "Node->next:   " << this->next << std::endl;

	std::cout << "===========End=of=QNode=DUMP===========" << std::endl;
}
