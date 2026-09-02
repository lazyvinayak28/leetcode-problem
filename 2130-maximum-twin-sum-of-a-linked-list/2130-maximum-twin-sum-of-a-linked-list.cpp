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
    int pairSum(ListNode* head) {
        if(head->next->next==NULL){return head->val+head->next->val;}
        int n=0;
        ListNode*temp=head;
        ListNode*tail=NULL;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        int c=n/2;
        temp=head;
        while(c!=0){
            tail=temp;
            temp=temp->next;
            c--;
        }
        ListNode*prev=NULL;
        ListNode*next=temp->next;
        while(temp!=NULL){
            
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
            
        }
        tail->next=prev;
        int ans=INT_MIN;
        ListNode*slow=head;
        ListNode*fast=tail->next;
        while(fast!=NULL){
            int sum=slow->val+fast->val;
            if(ans<sum){ans=sum;}
            slow=slow->next;
            fast=fast->next;
        }
    return ans;
    }
};