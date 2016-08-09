/*
Binary Tree Paths 
主体：vector<string> binaryTreePaths(TreeNode* root);
*/
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
