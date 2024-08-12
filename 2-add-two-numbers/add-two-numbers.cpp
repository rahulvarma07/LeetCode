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
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(0);
        ListNode* gen = dummy;
        int sum = 0, carry = 0;
        while(temp1 != NULL && temp2 != NULL){
            sum = (temp1->val + temp2->val);
            sum += carry;
            temp1 = temp1->next;
            temp2 = temp2->next;
            ListNode* Val = new ListNode(sum % 10);
            carry = sum/10;
            gen->next = Val;
            gen = gen->next;
        }
        while(temp1 != NULL){
            sum = temp1->val;
            sum += carry;
            temp1 = temp1->next;
            ListNode* Val = new ListNode(sum % 10);
            carry = sum/10;
            gen->next = Val;
            gen = gen->next;
        }
        while(temp2 != NULL){
            sum = temp2->val;
            sum += carry;
            temp2 = temp2->next;
            ListNode* Val = new ListNode(sum % 10);
            carry = sum/10;
            gen->next = Val;
            gen = gen->next;
        }
        
        if(carry != 0){
            ListNode* Val = new ListNode(carry);
            gen->next = Val;
        }

        return dummy->next;
    }
};