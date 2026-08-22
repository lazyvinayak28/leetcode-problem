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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> nums(m, vector<int>(n, -1));
        int top = 0, down = m - 1;
        int left = 0, right = n - 1;
        ListNode*temp=head;
        while(temp!=NULL){
            //right
            for(int i=left;i<=right;i++){
                nums[top][i]=temp->val;
                if(temp->next==NULL){return nums;}
                temp=temp->next;
            }
            top++;
            //down
            for(int i=top;i<=down;i++){
                nums[i][right]=temp->val;
                if(temp->next==NULL){return nums;}
                temp=temp->next;
            }
            right--;
            //left
            for(int i=right;i>=left;i--){
                nums[down][i]=temp->val;
                if(temp->next==NULL){return nums;}
                temp=temp->next;
            }
            down--;
            //up
            for(int i=down;i>=top;i--){
                nums[i][left]=temp->val;
                if(temp->next==NULL){return nums;}
                temp=temp->next;
            }
            left++;
        }
        return nums;
    }
};