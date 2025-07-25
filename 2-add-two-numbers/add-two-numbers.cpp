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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
        int carry = 0;
        while((l1 != NULL || l2 != NULL) || carry){
            int sum = 0;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            } 
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode* curr = new ListNode(sum%10);
            temp->next = curr;
            temp = curr;
        }         
        return ans->next;
    }
};