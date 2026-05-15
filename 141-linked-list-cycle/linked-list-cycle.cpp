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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        ListNode* rab = head;
        ListNode* tor = head;
        while(rab != NULL and rab->next != NULL) {
            tor = tor->next;
            rab = rab->next->next;
            if(tor == rab) return true;
        }
        return false; // no cycle
    }
};