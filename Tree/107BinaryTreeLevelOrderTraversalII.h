/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 * 这段代码虽然不是很漂亮，但通过这道题，学习了BFS的实现，加深了对BFS的理解。
 * 意义蛮大的，之前知道有BFS，可从未看过实现的代码，这道题完全是自己的实现，加油！
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    
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
        
        vector<vector<int>> result_final;
        
        while(!result.empty()){
            result_final.push_back((result.back()));
            result.pop_back();
        }
            
        return result_final;
    }
};
