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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *wp = head;
        
        while(wp != NULL){
            if(wp->next != NULL){
                if(wp->val == wp->next->val){
                    wp->next = wp->next->next;
                }else{
                    wp = wp->next;
                }
            }else{
                wp = wp->next;
            }
        }
        return head;
    }
};
/**
 * 上面是我的代码
 * *********************************************************
 * */
