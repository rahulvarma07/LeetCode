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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* temp = head;
        temp = temp->next;
        ListNode* prev = new ListNode(head->val);
        ListNode* h = prev;
        int cnt = 0;
        while(temp != NULL){
            cnt += 1;
           if(prev->val != temp->val){
                prev->next = temp;
                prev = prev->next;
           }
           temp = temp->next;
        }
        prev->next = NULL;
        prev = h;
        return prev;
    }
};