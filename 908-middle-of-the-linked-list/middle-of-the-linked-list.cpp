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
    ListNode* middleNode(ListNode* head) {
        if(head->next == NULL) return head;
        ListNode* rabbit = head;
        ListNode* tortise = head;
        while(rabbit != NULL and rabbit->next != NULL) {
            tortise = tortise->next;
            rabbit = rabbit->next->next;
        }
        return tortise;
    }
};