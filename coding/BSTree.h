#include"TreeNode.h"

class BSTree 
{
	Node* m_root;
	void insert(int key, Node* node);	// recursion
public:
	BSTree();
	~BSTree();
	Node* root() { return m_root; }
	void freeNode(Node* leaf);
	Node* search(int key, Node* node);		// recursion, O(log N)
	void insert(int key);						// 
	Node* min(Node* node);
	Node* max(Node* node);
	Node* successor(Node* node);			// recursion		
	Node* predecessor(Node* node);
};