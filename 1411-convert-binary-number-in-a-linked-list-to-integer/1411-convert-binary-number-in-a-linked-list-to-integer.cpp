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
    int getDecimalValue(ListNode* head) {
        int count=0;
        int num=0;
        ListNode *temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        count--;
        temp=head;
        while(temp!=NULL){
            num+=pow(2,count)* temp->val;
            count--;
            temp=temp->next;
        }
        return num;
    }
};