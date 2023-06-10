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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *nehead=NULL,*tail=NULL,*temp=head;
        int sum=0;
        while(temp!=NULL){
            sum+=temp->val;
            if(temp->val==0 && sum!=0){
                ListNode *ne=new ListNode(sum);
                if(nehead==NULL){
                    nehead=ne;
                    tail=ne;
                }
                else{
                    tail->next=ne;
                    tail=ne;
                }
                sum=0;
            }
            temp=temp->next;
        }
        return nehead;
    }
};