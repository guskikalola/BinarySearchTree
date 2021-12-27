#ifndef SEARCHBINARYTREE_H
#define SEARCHBINARYTREE_H
#include "SearchBinaryTreeNode.h"

template <class T>

class SearchBinaryTree
{
	SearchBinaryTreeNode<T> *root;

public:
	SearchBinaryTree();
	void setRoot(SearchBinaryTreeNode<T> *root);
	void insertValue(T value);
	bool isEmpty();
	void print();
};

template <class T>
SearchBinaryTree<T>::SearchBinaryTree()
{
	this->root = NULL;
}

template <class T>
void SearchBinaryTree<T>::setRoot(SearchBinaryTreeNode<T> *root)
{
	this->root = root;
}

template <class T>
void SearchBinaryTree<T>::print()
{
	if (!this->isEmpty())
		this->root->print();
}

template <class T>
bool SearchBinaryTree<T>::isEmpty()
{
	return (this->root == NULL);
}

template <class T>
void SearchBinaryTree<T>::insertValue(T value)
{
	if (this->isEmpty())
	{
		SearchBinaryTreeNode<T> *node = new SearchBinaryTreeNode<T>(value);
		this->setRoot(node);
	}
	else
	{
		this->root->insertValue(value);
	}
}

#endif
