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
void rev_list(ListNode*& curr,ListNode*& prev,ListNode*& nxt){
    
    curr->next=prev;
    if(nxt==NULL){return;}
    prev=curr;
    curr=nxt;
    nxt=nxt->next;
    rev_list(curr,prev,nxt);

} 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){return head;}
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*nxt=head->next;
        rev_list(curr,prev,nxt);
        head=curr;
        return head;
        
    }
};