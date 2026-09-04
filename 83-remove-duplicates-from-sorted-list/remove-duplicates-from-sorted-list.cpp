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
        if(head == NULL || head->next == NULL) return head;
        ListNode* prev = head, *fut = head->next;
        while(fut != NULL) {
            if(prev->val != fut->val) {
                prev->next = fut;
                prev = prev->next;
                fut = fut->next;
            }else{
                fut = fut->next;
            }
        }
        prev->next = NULL;
        return head;
    }
};