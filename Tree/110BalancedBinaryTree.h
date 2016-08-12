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

    int depth(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        
        int dl = depth(root->left);
        int dr = depth(root->right);
        
        return dl < dr ? dr+1 : dl+1;
    }
    
    bool isBalanced(TreeNode* root) {
        
        if(!root){
            return true;
        }
        
        int l = depth(root->left);
        int r = depth(root->right);
        
        if(abs(l-r) > 1){
            return false;
        }
        
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
