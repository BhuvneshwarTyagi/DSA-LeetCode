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
        ListNode *slow=head;
        if(head==NULL){
            return false;
        }
        if(head->next==NULL){
            return false;
        }
        if(head->next==head){
            return true;
        }
        ListNode *fast=head;
        if(head->next!=NULL){
            fast=fast->next->next;
        }
        while(fast!=NULL){
            if(slow==fast ){
                return true;
            }
            slow=slow->next;
            if(fast->next==NULL){
                return false;
            }
            else{
                fast=fast->next->next;
            }

        }
        return false;
    }
};