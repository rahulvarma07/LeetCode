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
    
    int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
   }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == NULL) return head;
        ListNode* prev = head;
        ListNode* temp = head->next;
        while(temp){
            int x = gcd(prev->val, temp->val);
            ListNode* dummy = new ListNode(x);
            prev->next = dummy;
            dummy->next = temp;
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};