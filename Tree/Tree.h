#pragma once

template <class T> class Tree;
#include "TreeNode.h"

template <class T>
class Tree
{
public:
	Tree();                                          /* конструктор */
	int add_node(const T &);                         /* вставляет узел */
	TreeNode<T>* delete_node(TreeNode<T> *);         /* удаляет узел */
	TreeNode<T> *get_root();                         /* возвращает указатель на корень дерева */
private:
	TreeNode<T> *root;                          
};

template<class T>
Tree<T>::Tree()
{
	root = 0;                     
}

template<class T>
int Tree<T>::add_node(const T &x)
{
	return 0;
}


template<class T>
TreeNode<T>* Tree<T>::delete_node(TreeNode<T> *value)
{
	return node;
}

template<class T>
TreeNode<T>* Tree<T>::get_root()
{
	return root;
}
