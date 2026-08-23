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
 ListNode *gen(ListNode* list1, ListNode* list2){
 ListNode*n=new ListNode();
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        ListNode*ptr=n;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val <= temp2->val){
                n->next=temp1;
                temp1=temp1->next;
                n=n->next;
            }
            else{
                n->next=temp2;
                temp2=temp2->next;
                n=n->next;
            }
        }
        if(temp1==NULL){
            n->next=temp2;
    
        }
        else if(temp2==NULL){
            n->next=temp1;
        }
        return ptr->next;
 }

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) {return NULL;}
        ListNode*ans=lists[0];
         ListNode*temp=NULL;
        for(int i=1;i<lists.size();i++){
            temp=lists[i];
            ans=gen(ans,temp);
        }
        return ans;
    }
};