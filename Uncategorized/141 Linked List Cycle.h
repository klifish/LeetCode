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
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        
        set<ListNode*> buf;
        buf.insert(head);
        while(head->next != NULL){
            if(buf.find(head->next) == buf.end()){
                buf.insert(head->next);
            }else{
                return true;
            }
            head = head->next;
            
        }
        return false;
    }
};
