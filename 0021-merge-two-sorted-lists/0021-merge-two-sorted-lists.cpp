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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while(temp1!=nullptr && temp2!=nullptr){
                ListNode *ne=new ListNode();
                if(temp1->val < temp2->val){
                    ne->val=temp1->val;
                    temp1=temp1->next;
                }
                else{
                    ne->val=temp2->val;
                    temp2=temp2->next;
                }
                if(head==nullptr){
                        tail=ne;
                        head=ne;
                    }
                    else{
                        tail->next=ne;
                        tail=ne;
                    }
            }
            ListNode* rem=(temp1!=NULL) ?temp1 : temp2; 
            while(rem!=nullptr){
                ListNode *ne=new ListNode();
                ne->val=rem->val;
                rem=rem->next;
                if(tail==nullptr){
                        tail=ne;
                        head=ne;
                    }
                    else{
                        tail->next=ne;
                        tail=ne;
                    }
                
            }
            
            return head;
    }
};