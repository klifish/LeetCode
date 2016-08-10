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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL)
            return root;
        
        if((p->val <= root->val && root->val <= q->val) || (q->val <= root->val && root->val <= p->val)){
            return root;
        }else{
            if(root->val < p->val){
                return lowestCommonAncestor(root->right,p,q);
            }else
                return lowestCommonAncestor(root->left,p,q);
        }
    }
};
