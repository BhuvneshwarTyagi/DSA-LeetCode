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
    ListNode* reverseKGroup(ListNode* head, int k) {
            // Write your code here.
    ListNode *prev=NULL,*curr=head,*next,*temp1=head,*temp2=NULL;
    int length=0;
    while(temp1!=NULL){
        temp1=temp1->next;
        length++;
    }
    
    length=length/k;
    for(int i=1;i<=length;i++){
        if(i==1){
            temp1=curr;
        }
        else{
            temp2=curr;
        }
        prev=NULL;
        for(int j=1;j<=k;j++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        if(i==1){
            head=prev;
        }
        else{
            temp1->next=prev;
            temp1=temp2;
        }

    }
    if(curr!=NULL){
        temp1->next=curr;
    }
    return head;
    }
};