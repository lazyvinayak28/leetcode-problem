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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){return head;}
        ListNode*n1=new ListNode();
        ListNode*n2=new ListNode();
        ListNode*ptr1=n1;
        ListNode*ptr2=n2;
        ListNode*temp=head;
        int c=1;
        while(temp!=NULL){
            if(c%2!=0){
                n1->next=temp;
                n1=n1->next;
            }
            else{
                n2->next=temp;
                n2=n2->next;
            }
            temp=temp->next;
            c++;
        }

        n1->next=ptr2->next;
        n2->next=NULL;
        return ptr1->next;
    
    }
};