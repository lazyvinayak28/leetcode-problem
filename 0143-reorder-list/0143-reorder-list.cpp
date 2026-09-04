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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){return;}
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*tail=NULL;
        while(fast!=NULL && fast->next!=NULL){
            tail=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        tail->next=NULL;
        // ListNode*curr=slow;
        ListNode*prev=NULL;
        ListNode*curr=slow;
        ListNode*next=curr->next;
        while(true){
            curr->next=prev;
            prev=curr;
            curr=next;
            if(curr==NULL){break;}
            next=curr->next;
        }
        fast=prev;
        slow=head;
        ListNode*sloww=head->next;
        ListNode*fastt=fast->next;
        ListNode*temp=head;
        while(true){
            slow->next=fast;
            fast->next=sloww;
            slow=sloww;
            temp=fast;
            fast=fastt;
            if(fast==NULL || slow==NULL ){break;}
            sloww=slow->next;
            fastt=fast->next;
        }
        while(slow==NULL && fast!=NULL){
            fastt=fast->next;
            temp->next=fast;
            fast=fastt;
            if(fast==NULL){break;}
            fastt=fast->next;
        }
    }
};