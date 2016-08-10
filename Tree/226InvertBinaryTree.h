/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return root;
        }
        
        //交换左右子树
        TreeNode* temp = root->right;
        root->right = root->left;
        root->left = temp;
        
        invertTree(root->right);
        invertTree(root->left);
        
        return root;
    }
};
