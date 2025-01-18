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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        ListNode* temp = NULL;
        ListNode* frst = head;
        ListNode* sec = head->next;
        while(frst != NULL){
            frst->next = temp;
            temp = frst;
            frst = sec;
            if(sec)sec = sec->next;
        }
        return temp;
    }
};