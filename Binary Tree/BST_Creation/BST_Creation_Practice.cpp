#include<bits/stdc++.h>
using namespace std;
class Node {

public:
	int key;
	Node *left;
	Node *right;


	Node (int key)
	{
		this->key=key;
		left=right=NULL;
	}

};

Node* insert (Node* root, int key)
{
	if (root==NULL)
	{
		return new Node (key);
	}

	if (key<root->key)
	{
		root->left=insert(root->left,key);
	}

	else
	{
		root->right=insert (root->right,key);
	}
	return root;

}

void PrintInorder(Node *root)
{
	if (root==NULL)
	{
		return;		
	}

	PrintInorder(root->left);
	cout<<root->key;
	PrintInorder(root->right);
}


void search_binary (Node* root,int s_key)
{
	if (root==NULL)
	{
		cout<<"element not found"<<endl;
	}

	else if (s_key<root->key)
	{
		search_binary(root->left,s_key);
	}

	else if (s_key>root->key)
	{
		search_binary(root->right,s_key);
	}

	else
	{
		cout<<"key is present";
	}

}


int main ()

{
	Node *root=NULL;
	int arr[]={8,3,10,1,6,14,4,7,13};

	for (int x:arr){
		root=insert(root,x);
	}
	//PrintInorder(root);
	search_binary(root,3);
	return 0;
}