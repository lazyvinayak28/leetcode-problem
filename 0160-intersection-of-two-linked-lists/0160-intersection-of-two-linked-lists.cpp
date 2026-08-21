/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*a=headA;
        ListNode*b=headB;
        int na=0,nb=0;
        ListNode*tempA=headA;
        ListNode*tempB=headB;
        while(tempA!=NULL){
            na++;
            tempA=tempA->next;}
        while(tempB!=NULL){
            nb++;
            tempB=tempB->next;
        }
        int idx=abs(na-nb);
        tempA=headA;
        tempB=headB;
        if(idx==0){
            while(tempA!=tempB && tempA!=NULL && tempB!=NULL ){
                tempA=tempA->next;
                tempB=tempB->next;
            }
            return tempA;
        }
        else{
            if(na>nb){
                while(idx!=0){
                    idx--;
                    tempA=tempA->next;
                }
            }
            else{
                while(idx!=0){
                    idx--;
                    tempB=tempB->next;
                }
            }
            while(tempA!=tempB && tempA!=NULL && tempB!=NULL ){
                tempA=tempA->next;
                tempB=tempB->next;
            }
            return tempA;
            
        }

    return NULL;
    }
};