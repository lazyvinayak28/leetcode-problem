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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode();
        ListNode* large = new ListNode();
        ListNode* s = small;
        ListNode* l = large;
        ListNode* temp = head;
        while (temp != NULL) {
            if (temp->val < x) {
                s->next = temp;
                s = s->next;
            }
            else {
                l->next = temp;
                l = l->next;
            }
            temp = temp->next;
        }
        l->next = NULL;
        s->next = large->next;
        return small->next;
    }
};