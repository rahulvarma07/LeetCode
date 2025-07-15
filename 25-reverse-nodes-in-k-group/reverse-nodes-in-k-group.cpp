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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* nextt =  curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k){
        if(k == 1) return head;

        int cnt = 1;
        ListNode* start = head;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp){
            if(cnt == 1){
                start = temp;
            }
            else if(cnt == k){
                ListNode* end = temp->next;
                temp->next = NULL;
                ListNode* rev =  reverse(start);
                if(prev){
                    prev->next = rev;
                }
                else{
                    head = rev;
                }
                start->next = end;
                prev = start;
                temp = start;
                cnt = 0;
            }
            cnt++;
            temp = temp->next;
        }

        return head;
    }
};