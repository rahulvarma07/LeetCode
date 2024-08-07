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
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;
        ListNode* temp = head;
        ListNode* prev = new ListNode(0);
        ListNode* h1 = prev;
        int ans = 0;
        while(temp != NULL){
            if(temp->val != 0){
                ans += temp->val;
                temp = temp->next;
            }
            else{
                ListNode* Values = new ListNode(ans);
                prev->next = Values;
                prev = prev->next;
                ans = 0;
                temp = temp->next;
            }
        }
        prev = h1;
        return prev->next;
    }
};