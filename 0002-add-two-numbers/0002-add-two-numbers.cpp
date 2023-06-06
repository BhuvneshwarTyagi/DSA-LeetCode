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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,sum=0;
        ListNode *head=NULL,*tail=NULL;
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        while(temp1!=NULL && temp2!=NULL){
            sum=temp1->val + temp2->val + carry;
            carry=sum/10;
            ListNode *ne=new ListNode();
            ne->val=sum%10;
            if(head==NULL){
                head=ne;
                tail=ne;
            }
            else{
                tail->next=ne;
                tail=ne;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        ListNode *rem=(temp1!=NULL) ? temp1 : temp2;
        while(rem!=NULL){
            sum=rem->val + carry;
            carry=sum/10;
            ListNode *ne=new ListNode();
            ne->val=sum%10;
            if(head==NULL){
                head=ne;
                tail=ne;
            }
            else{
                tail->next=ne;
                tail=ne;
            }
            rem=rem->next;
        }
        if(carry!=0){
            ListNode *ne=new ListNode();
            ne->val=carry;
            if(head==NULL){
                head=ne;
                tail=ne;
            }
            else{
                tail->next=ne;
                tail=ne;
            }
        }
        return head;
    }
};