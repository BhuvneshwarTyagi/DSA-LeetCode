/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=1;
        ListNode *temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count%2!=0){
            count++;
            count++;
        }
        count/=2;
        temp=head;
        while(count){
            count--;
            if(count){
                temp=temp->next;
            }
        }
        return temp;
    }
};