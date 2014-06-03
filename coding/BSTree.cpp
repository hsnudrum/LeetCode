#include "BSTree.h"

using namespace std;

BSTree::BSTree()
{
	m_root = NULL;
}

BSTree::~BSTree()
{
	freeNode(m_root);
}

void BSTree::freeNode(Node* leaf)
{
	if (leaf != NULL)
	{
		freeNode(leaf->left());
		freeNode(leaf->right());
		delete leaf;
	}
}

Node* BSTree::search(int data, Node* node) 
{
	if (node == NULL) 
		return NULL;
	else if (data == node->key()) 
		return node;
	else if (data <= node->key())  
		search(data, node->left());
	else if (data > node->key())
		search(data, node->right());
	else
		return NULL;
}

//Node* BSTree::insert(Node* node, int data)
//{
//	if (node == NULL)	//empty tree
//	{
//		node = new Node();
//		node->data = data; 
//		return node;
//		//GetNewNode(data);
//	}
//	else
//	{
//		if (node->data >= data)
//			node->left = insert(node->left, data);
//		else
//			node->right = insert(node->right, data);
//		return node;
//	}
//}

void BSTree::insert(int data)
{
	if (m_root == NULL)	// empty tree, add first element
	{
		cout << "add root node ... " << data << endl;
		m_root = new Node();
		m_root->setKey(data);
	}
	else
	{
		cout << "insert another node ... " << data << endl;
		insert(data, m_root);
	}
}
// private method to do the recurson 
void BSTree::insert(int data, Node* node)
{
	if (data <= node->key())	// insert to left subtree	
	{
		if (node->left() == NULL)
		{
			node->setLeft(new Node());
			node->left()->setKey(data);
			node->left()->setParent(node);
		}
		else
		{
			insert(data, node->left());
		}
	}
	else    // insert to right subtree
	{
		if (node->right() == NULL)
		{
			node->setRight(new Node());
			node->right()->setKey(data);
			node->right()->setParent(node);
		}
		else
		{
			insert(data, node->right());
		}
	}
}

Node* BSTree::min(Node* node)
{
	if (node == NULL)
		return NULL;

	if (node->left() != NULL)
		min(node->left());
	else
		return node;
}

Node* BSTree::max(Node* node)
{
	if (node == NULL)
		return NULL;

	if (node->right() != NULL)
		max(node->right());
	else
		return node;	
}


