#include "stdafx.h"
#include<cstdio>
#include<string>
#include<iostream>
#include<sstream>
#include<cstdlib>
#include<vector>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

vector<string> binaryTreePaths(TreeNode* root) {
	vector<string> vs;

	if (root == NULL)
		return vs;

	if (root->right == NULL && root->right == NULL){ //leaf node
		stringstream ss;
		ss << root->val;
		vs.push_back(ss.str());
		return vs;
	}

	vector<string> lt = binaryTreePaths(root->left);
	vector<string> rt = binaryTreePaths(root->right);

	for (auto itlt = lt.begin(); itlt != lt.end(); ++itlt){
		stringstream ss;
		ss << root->val;
		*itlt = ss.str() + "->" + *itlt;
		vs.push_back(*itlt);
	}

	for (auto itrt = rt.begin(); itrt != rt.end(); ++itrt){
		stringstream ss;
		ss << root->val;
		*itrt = ss.str() + "->" + *itrt;
		vs.push_back(*itrt);
	}

	return vs;
}
int main(int argc, char* argv[])
{
	TreeNode* t1 = new TreeNode{ 1 };
	TreeNode* t2 = new TreeNode{ 2 };


	t1->left = t2;

	vector<string> vs = binaryTreePaths(t1);
	for (auto it:vs){
		cout << it << endl;
	}

	return 0;
}

