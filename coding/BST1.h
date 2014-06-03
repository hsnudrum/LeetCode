#include"TreeNode.h"

using namespace std;

//// Binery Search Tree class
class BST
{
	Node* root;
public:
	BST();
	~BST();
	Node* getRoot() { return root; }
	void setRoot(int data) { root; }

    Node* search(Node* root, int data);

	Node* insert(Node* root, int data);
	void insert(int data);


	Node* getNewNode(int data);
	void freeNode(Node* leaf);


};
