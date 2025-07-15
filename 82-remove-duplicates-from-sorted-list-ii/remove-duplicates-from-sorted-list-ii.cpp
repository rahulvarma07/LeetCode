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
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp && temp->next){
            if(temp->val != temp->next->val){
                prev = temp;
                temp = temp->next;
            }
            else{
                int currVal = temp->val;
                while(temp && temp->val == currVal) temp = temp->next;
                if(prev == NULL) head = temp;
                else prev->next = temp;
            }
        }
        return head;
    }
};