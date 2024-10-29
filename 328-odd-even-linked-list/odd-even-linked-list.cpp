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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* oddLL = head;
        ListNode* evenLL = head->next;
        ListNode* res = evenLL;
        while(evenLL && evenLL->next){
            oddLL->next = evenLL->next;
            oddLL = oddLL->next;
            evenLL->next = oddLL->next;
            evenLL = evenLL->next;
        }
        oddLL->next = res;
        return head;
    }
};