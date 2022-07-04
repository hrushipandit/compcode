#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int key;
	Node *left;
	Node *right;

	Node (int key)
	{
		left=NULL;
		right=NULL;
		this->key=key;
	}

};

Node* min_height_tree (int arr[],int key,int low,int high,Node* root)
{
	int size = sizeof(arr)/size(arr[0]);
	int low=0;
	int high=size;
	Node *left1=NULL;
	Node *right1=NULL;

	if (low==high)
	{
		return NULL;
	}


	if (size%2==0)
	{
		left1=min_height_tree(arr,key,low,high/2-1,root);
		right1=min_height_tree(arr,key,high/2,high,root);
		root->left=left1;
		root->right=right1;
	}
	else
	{
		left1=min_height_tree(arr,key,low,high/2,root);
		right1=min_height_tree(arr,key,high/2,high,root);
		root->left=left1;
		root->right=right1;
	}
}

int main ()
{
	Node * root = NULL;

	int arr[] = {4,6,2,1,7,8,3,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+size);

	for (int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}

}