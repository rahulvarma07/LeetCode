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
    ListNode *detectCycle(ListNode *head) {
        ListNode* rab = head;
        ListNode* tor = head;
        while(rab != NULL && rab->next != NULL){
            rab = rab->next->next;
            tor = tor->next;
            if(rab == tor){
                tor = head;
                while(tor != rab){
                    tor = tor->next;
                    rab = rab->next;
                }
                return tor;
            }
        }
        return NULL;
    }
};