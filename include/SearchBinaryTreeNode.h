#ifndef SEARCHBINARYTREENODE_H
#define SEARCHBINARYTREENODE_H
#include <iostream>
template <class T>
class SearchBinaryTreeNode
{
	T value;
	SearchBinaryTreeNode<T> *right;
	SearchBinaryTreeNode<T> *left;

public:
	SearchBinaryTreeNode(T value);
	bool hasLeft();
	bool hasRight();
	bool isLeaf();
	void setValue(T value);
	void insertValue(T value);
	void print();
};

template <class T>
SearchBinaryTreeNode<T>::SearchBinaryTreeNode(T value)
{
	this->value = value;
	this->left = NULL;
	this->right = NULL;
}

template <class T>
bool SearchBinaryTreeNode<T>::hasLeft()
{
	return !(this->left == NULL);
}

template <class T>
bool SearchBinaryTreeNode<T>::hasRight()
{
	return !(this->right == NULL);
}
template <class T>
bool SearchBinaryTreeNode<T>::isLeaf()
{
	return (!this->hasLeft() && !this->hasRight());
}

template <class T>
void SearchBinaryTreeNode<T>::insertValue(T value)
{
	if (value > this->value)
	{
		if (this->hasRight())
			this->right->insertValue(value);
		else
			this->right = new SearchBinaryTreeNode<T>(value);
	}
	else // value < this->value
	{
		if (this->hasLeft())
			this->left->insertValue(value);
		else
			this->left = new SearchBinaryTreeNode<T>(value);
	}
}

template <class T>
void SearchBinaryTreeNode<T>::setValue(T value)
{
	this->value = value;
}

template <class T>
void SearchBinaryTreeNode<T>::print()
{
	printf("[ ");
	std::cout << this->value << " ";
	if (this->isLeaf())
	{
		printf("]");
	}
	else
	{
		if (this->hasLeft())
		{
			this->left->print();
		}
		else
			printf(" * ");

		if (this->hasRight())
		{
			this->right->print();
		}
		else
			printf(" * ");

		printf("]");
	}
}

#endif
