// Aim: Implement the Binary Tree Traversal.

#include<iostream>
#include<queue>

using namespace std;

class node{
	public:
	int data;
	node* left;
	node* right;

	node(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}

	void insert(node* root, int data){
		if (root == NULL){
			root = new node(data);
			return;
		}
		queue<node*> traverse;
		traverse.push(root);
		while (!traverse.empty()){
			node* curr = traverse.front();
			traverse.pop();

			if (curr->left == NULL){
				node* temp = new node(data);
				curr->left = temp;
				return;
			}
			else
				traverse.push(curr);

			if (curr->right == NULL){
				node* temp = new node(data);
				curr->right = temp;
				return;
			}
			else
				traverse.push(curr);
		}
	}
};

void levelOrderTraversal(node* root){
	queue<node*> levelOrder;
	levelOrder.push(root);
	cout << root->data << " ";

	while (!levelOrder.empty()){
		node* curr = levelOrder.front();
		levelOrder.pop();

		if (curr->left != NULL){
			cout << curr->left->data << " ";
			levelOrder.push(curr->left);
		}

		if (curr->right != NULL){
			cout << curr->right->data << " ";
			levelOrder.push(curr->right);
		}
	}
	cout << endl;
	return;
}

void inOrderTraversal(node* root){
	if (root == NULL)
		return;
	inOrderTraversal(root->left);
	cout << root->data << " ";
	inOrderTraversal(root->right);
}

void preOrderTraversal(node* root){
	if (root == NULL)
		return;
	cout << root->data << " ";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

void postOrderTraversal(node* root){
	if (root == NULL)
		return;
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout << root->data << " ";
}

int main(){

	node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	root->left->left->left = new node(8);

	cout << "Level order Traversal: ";
	levelOrderTraversal(root);

	cout << "In-order Traversal: ";
	inOrderTraversal(root);
	cout << endl;

	cout << "Pre-order Trvasersal: ";
	preOrderTraversal(root);
	cout << endl;

	cout << "Post-order Traversal: ";
	postOrderTraversal(root);
	cout << endl;

	return 0;
}

