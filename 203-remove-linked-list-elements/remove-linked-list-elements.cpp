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
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL and head->val == val) {
            head = head->next;
        }
        if(head != NULL) {
            ListNode* prev = head;
            ListNode* pres = head->next;
            while(pres != NULL) {
                while(pres and pres->val == val) {
                    pres = pres->next;
                }
                prev->next = pres;
                prev = prev->next;
                if(pres != NULL) pres = pres->next;
            }
        }
        return head;
    }
};