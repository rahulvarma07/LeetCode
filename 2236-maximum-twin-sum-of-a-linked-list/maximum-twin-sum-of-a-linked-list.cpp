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
    ListNode* revLL(ListNode* head){
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
    int pairSum(ListNode* head) {
        // Can use rab & tor algo 
        ListNode* rab = head;
        ListNode* tor = head;
        ListNode* prev = head;
        while(rab){
            prev = tor;
            tor = tor->next;
            rab = rab->next->next;
        }
        ListNode* rev = revLL(tor);
        int ans = 0;
        while(rev){
            ans = max(ans, (head->val + rev->val));
            head = head->next;
            rev = rev->next;
        }
        return ans;
    }
};