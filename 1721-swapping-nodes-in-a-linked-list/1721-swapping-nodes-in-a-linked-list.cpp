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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*s=head;
        ListNode*p=head;
        int c=1;
        while(c!=k){
            c++;
            s=s->next;
        }
        
        ListNode*t=s;
        while(s->next!=NULL){
            s=s->next;
            p=p->next;
        }
        int x=t->val;
        t->val=p->val;
        p->val=x;
        return head;


    }
};