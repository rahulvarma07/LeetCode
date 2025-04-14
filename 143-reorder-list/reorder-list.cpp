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
        ListNode* prev = NULL;
        ListNode* pres = head;
        while(pres){
            ListNode* fut = pres->next;
            pres->next = prev;
            prev = pres;
            pres = fut;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        // rab tor
        ListNode* rab = head;
        ListNode* tor = head;
        ListNode* temp = head;
        while(rab){
            temp = tor;
            tor = tor->next;
            if(rab->next == NULL) break;
            rab = rab->next->next;
        }
        temp->next = NULL;
        ListNode* rev = reverseList(tor);
        temp = head;
        while(rev != NULL){
            ListNode* fut = rev->next;
            ListNode* pres = temp->next;
            temp->next = rev;
            rev->next = pres;
            temp = pres;
            rev = fut;
        }
    }
};