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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL) return NULL;
        ListNode* rab = head;
        ListNode* tor = head;
        ListNode* dummy = head;
        while(rab != NULL && rab ->next != NULL){
            dummy = tor;
            rab = rab->next->next;
            tor = tor->next;
        }
        dummy->next = tor->next;
        tor->next = NULL;
        delete(tor);
        return head;
    }
};