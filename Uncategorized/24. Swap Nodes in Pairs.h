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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)return head;
        
        ListNode* work_pointer = head;
        
        while(work_pointer != NULL && work_pointer->next != NULL){
            swap(work_pointer->val,work_pointer->next->val);
            work_pointer = work_pointer->next->next;
        }
        
        return head;
    }
};
