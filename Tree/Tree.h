#pragma once

template <class T> class Tree;
#include "TreeNode.h"

template <class T>
class Tree
{
public:
	Tree();                                          /* конструктор */
	int add_node(const T &);                         /* вставляет узел */
	TreeNode<T>* pop_node(TreeNode<T> &);         /* удаляет узел */
	TreeNode<T> *get_root();                         /* возвращает указатель на корень дерева */
	TreeNode<T>* get_node(TreeNode<T> &)
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
	TreeNode<T>* node = new TreeNode<T>(x);
	TreeNode<T>* current = root;
	TreeNode<T>* prev;

	while (current != 0)
	{
		prev = current;
		if (x < current->get_value())
			current = current->left;
		else
			current = current->right;
	}
	node->parent = prev;
	if (prev == 0)
		root = node;
	else {
		if (x < prev->get_value())
			prev->left = node;
		else
			prev->right = node;
	}
	return 0;
}


template<class T>
TreeNode<T>* Tree<T>::pop_node(TreeNode<T> &value)
{

	return node;
}

template<class T>
TreeNode<T>* Tree<T>::get_node(TreeNode<T> &value)
{
	/*template<class NODETYPE>
	TreeNode<NODETYPE>* Tree<NODETYPE>::find_node(TreeNode<NODETYPE>* n,
		const NODETYPE & val)
	{
		if (n == 0 || val == n->get_data())
			return n;
		if (val > n->get_data())
			return find_node(n->right, val);
		else
			return find_node(n->left, val);
	}
	return node;*/
}

template<class T>
TreeNode<T>* Tree<T>::get_root()
{
	return root;
}
