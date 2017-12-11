#pragma once


template <class T> class TreeNode
{
	friend class Tree<T>;
public:
	TreeNode(const T &);
	T get_value();
protected:
	TreeNode* left;           /* указатель на левого ребенка */
	TreeNode* right;          /* указатель на правого ребенка */
	TreeNode* parent;         /* указатель на родителя */
	T value;            /* значение */
};

template<class T>
TreeNode <T>::TreeNode(const T &a)
{
	value = a;
	parent = left = right = 0;
}

template <class T>
T TreeNode <T>::get_value()
{
	return value;
}
