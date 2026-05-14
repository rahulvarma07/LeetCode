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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        ListNode* prev = head;
        ListNode* temp = head->next;
        while(temp != NULL) {
            if(temp->val == prev->val) {
                temp = temp->next;
            }else {
                prev->next = temp;
                prev = temp;
                temp = temp->next;
            }
        }
        prev->next = NULL;
        return head;
    }
};