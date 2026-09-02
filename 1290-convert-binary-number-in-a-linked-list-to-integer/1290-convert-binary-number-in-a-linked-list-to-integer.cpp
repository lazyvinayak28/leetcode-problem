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
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*next=head->next;
        while(curr!=NULL){
            curr->next=prev;
            prev=curr;
            curr=next;
            if(curr==NULL){break;}
            next=curr->next;
        }
        head=prev;
        ListNode*temp=head;
        int ans=0,x=0;
        while(temp!=NULL){
            ans+=(temp->val)*pow(2,x);
            x++;
            temp=temp->next;
        }
        return ans;
    }
};