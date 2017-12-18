#pragma once

template <class T> class QNode
{
public:
	QNode(const T &);
	~QNode();
	T get_value();
	QNode<T>* get_next();
	void QNode_Dump();

protected:
	QNode* next_;         
	T value_;           
	
};

template<class T>
QNode <T>::QNode(const T &a)
{
	value_ = a;
	next_ = 0;
}

template <class T>
T QNode <T>::get_value()
{
	return value_;
}

template <typename T>
QNode<T>* QNode<T>::get_next()
{
	return next_;
}

template <class T>
QNode <T>::~QNode()
{

}

template <class T>
void QNode <T>::QNode_Dump()
{
	std::cout << "===============QNode=DUMP==============" << std::endl;

	std::cout << "Node address: " << this << std::endl;

	std::cout << "Node->value:  " << value_ << std::endl;
	std::cout << "Node->next:   " << next_ << std::endl;

	std::cout << "===========End=of=QNode=DUMP===========" << std::endl;
	return;
}
