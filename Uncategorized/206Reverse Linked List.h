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
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL){
            return (ListNode*)NULL;
        }
        
        ListNode* rhead = NULL;
        while(head->next != NULL){
            ListNode* tmp = head->next;
            head->next = rhead;
            rhead = head;
            head = tmp;
        }
        head->next = rhead;
        return head;
    }
};
