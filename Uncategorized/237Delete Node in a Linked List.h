/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        //当前节点使用下一个节点覆盖，实现删除当前节点
        if(node == NULL)
            return;
        
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
