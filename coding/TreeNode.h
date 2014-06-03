#include<iostream>	// for NULL

// generic tree node class
class Node
{
	int m_key;
	Node* m_left;
	Node* m_right;
	Node* m_parent;
public:
	Node(): m_key(-1) 
	{ 
		m_left = NULL;
		m_right = NULL;
		m_parent = NULL;
	}
	int key() { return m_key; }
	Node* left() { return m_left; }
	Node* right() { return m_right; }
	Node* parent() { return m_parent; }
	void setKey(int key) { m_key = key; }
	void setLeft(Node* left) { m_left = left; }
	void setRight(Node* right) { m_right = right; }
	void setParent(Node* parent) {m_parent = parent; }
};