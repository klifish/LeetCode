/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /**
  * 递归解法很好理解，思路也很容易想到，不过将两者结合，以目前水平来说，不太容易：从这道题可以看出，对递归的理解不够深入，
  * 通常会想直接通过所给函数进行递归，有时候真的行不通；这时，应该想到的是自己设计递归函数，在解决方案中调用。
  * 切记，一定要学会自己设计递归函数
  * 
  */
class Solution {
public:
    bool isSym(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL) return true;
        if(left == NULL && right != NULL) return false;
        if(left != NULL && right == NULL) return false;
        if(left->val != right->val) return false;
        
        return isSym(left->right,right->left) && isSym(left->left,right->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return isSym(root->left,root->right);
    }
};
