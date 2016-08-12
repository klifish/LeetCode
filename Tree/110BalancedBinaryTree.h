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
        if(root == NULL)
            return 0;
        
        if(root->left == NULL && root->right == NULL)
            return 1;
        
        int dl = depth(root->left);
        int dr = depth(root->right);
        
        return dl < dr ? dr+1 : dl+1;
    }
    
    bool isBalanced(TreeNode* root) {
        
        if(root == NULL)
            return true;
        
        int l = depth(root->left);
        int r = depth(root->right);
        
        if(abs(l-r) > 1)
            return false;
        
        return isBalanced(root->left) && isBalanced(root->right);
    }
};

/**
 * 这道题很有意思！
 * 主体部分的递归过程，“return isBalanced(root->left) && isBalanced(root->right);”，
 * 说明在找到一个满足条件的节点（即，非平衡）时，向上返回结果（false）。
 * 注意，这里需要将结果向上传递至最初的函数调用，需要获取是否存在非平衡节点，因此，只关注false即可
 * 
 * /
