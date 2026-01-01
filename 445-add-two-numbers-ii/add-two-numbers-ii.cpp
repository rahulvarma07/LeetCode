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
    ListNode* reverseFunction(ListNode* l1){
        ListNode* prev = NULL;
        ListNode* curr = l1;
        while(curr) {
            ListNode* future = curr->next;
            curr->next = prev;
            prev = curr;
            curr = future;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* l1Node = reverseFunction(l1);
       ListNode* l2Node = reverseFunction(l2);
       // 3 4 2
       // 4 6 5
       // 7 0 8
       int carry = 0;
       ListNode* head = new ListNode(-1);
       ListNode* temp = head;
       while(l1Node != NULL && l2Node != NULL){
            int x = l1Node->val, y = l2Node->val;
            int ans = x + y + carry;
            int rem = ans % 10;
            carry = ans / 10;
            ListNode* dummy = new ListNode(rem);
            temp->next = dummy;
            temp = temp->next;
            l1Node = l1Node->next;
            l2Node = l2Node->next;
       }
       while(l1Node != NULL) {
            int ans = l1Node->val + carry;
            int rem = ans % 10;
            carry = ans / 10;
            ListNode* dummy = new ListNode(rem);
            temp->next = dummy;
            temp = temp->next;
            l1Node = l1Node->next;
       }
       while(l2Node != NULL) {
            int ans = l2Node->val + carry;
            int rem = ans % 10;
            carry = ans / 10;
            ListNode* dummy = new ListNode(rem);
            temp->next = dummy;
            temp = temp->next;
            l2Node = l2Node->next;
       }
       if(carry != 0){
            ListNode* dummy = new ListNode(carry);
            temp->next = dummy;
            temp = temp->next;
       }
       temp->next = NULL;
       return reverseFunction(head->next);
    }
};