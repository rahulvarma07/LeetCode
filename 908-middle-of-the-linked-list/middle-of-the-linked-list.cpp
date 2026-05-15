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
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL) {
            len++;
            temp = temp->next;
        } // O(n)
        // l = 5 h = l/2 -> 2
        int h = len/2;
        while(h--) {
            head = head->next;
        } // O(n/2)
        return head;
    }
};