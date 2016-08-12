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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        vector<int> sub_result;
        
        if(root == NULL) return result;
        
        deque<TreeNode*> current_level{root};
        deque<TreeNode*> next_level{root};
        
        while(!next_level.empty()){
            current_level.clear();
            current_level = next_level;
            next_level.clear();
            
            while(!current_level.empty()){
                TreeNode* temp = current_level.front();  //front()返回对元素的引用
                current_level.pop_front();
                
                if(temp->left != NULL)
                    next_level.push_back(temp->left);
                
                if(temp->right != NULL)
                    next_level.push_back(temp->right);
                
                sub_result.push_back(temp->val);
            }

            result.push_back(sub_result);
            sub_result.clear();
        }
        return result;
    }
};
