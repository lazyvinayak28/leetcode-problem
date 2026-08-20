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
    ListNode* deleteMiddle(ListNode* head) {
        int c=0;
        ListNode*temp=head;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        int idx=c/2;
        if(idx==0){head=NULL;return head;}
        temp=head;c=1;
        while(c!=idx){
            c++;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};