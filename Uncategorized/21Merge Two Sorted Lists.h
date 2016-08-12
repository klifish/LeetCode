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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL)
            return l2;
        
        if(l2 == NULL)
            return l1;
            
        ListNode* head;
        ListNode* end;
        
        if(l2->val < l1->val){
            ListNode* tmp = l2;
            l2 = l1;
            l1 = tmp;
        }
        
        head = l1;
        while(1){
            if(l1->next == NULL){
                l1->next = l2;
                return head;
            }
            
            if(l2->val <= l1->next->val){
                if(l2->next == NULL){
                    l2->next = l1->next;
                    l1->next = l2;
                    return head;
                }
                
                ListNode* l2_tmp = l2->next;
                l2->next = l1->next;
                l1->next = l2;
                l2 = l2_tmp;
            }else{
                if(l1->next != NULL)
                    l1 = l1->next;
                else
                    l1->next = l2;
            }
        }
        return head;
    }
};
