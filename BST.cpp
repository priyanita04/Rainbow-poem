#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
Node* create()
{
	int x;
	cout<<"Enter data (-1 for no node)";
	cin>>x;
	Node* new_node = new Node();
	if(x==-1)return 0;
	new_node->data = x;
	cout<<"Enter left child";
	new_node->left = create();
	cout<<"Enter right child data";
	new_node->right = create();
	return new_node;
	
}
Node* root = NULL;
int main(){
	Node* root ;
	create();
	return 0;
}
