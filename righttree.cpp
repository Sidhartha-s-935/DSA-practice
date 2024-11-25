//HEADERS
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

//NAMESPACES

using namespace std;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

struct Node{
	int data;
	Node* left;
	Node* right;
	
	Node (int val){
		data = val;
		left = right = nullptr;
	}
};

vector<int> rightview(Node* root){
	vector<int> result;
    	if (root == nullptr) return result;

    	queue<Node*> q;
    	q.push(root);

    	while (!q.empty()) {
        	int levelSize = q.size();
        	for (int i = 0; i < levelSize; i++) {
            		Node* node = q.front();
            		q.pop();

            	if (i == levelSize - 1) {
                	result.push_back(node->data);
            	}

            	if (node->left) q.push(node->left);
            	if (node->right) q.push(node->right);
        	}
	}

    	return result;
}

int main(){
	Node *root = new Node(1);
	root->left = new Node(2);
    	root->right = new Node(3);
    	root->left->left = new Node(4);
    	root->left->right = new Node(5);
	vector<int> view = rightview(root);
	for (int i = 0;i<view.size();i++) cout<<view[i]<<" ";
	cout<<endl;
}
