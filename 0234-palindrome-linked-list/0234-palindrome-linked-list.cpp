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
    bool isPalindrome(ListNode* head) {
        ListNode*temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        vector<int> nums(n,0);
        temp=head;
        int i=0;
        while(temp!=NULL){
            nums[i]=temp->val;
            temp=temp->next;
            i++;
        }
        vector<int> num=nums;
        reverse(num.begin(),num.end());
        if(num==nums){return true;}
        return false;
        

    }
};