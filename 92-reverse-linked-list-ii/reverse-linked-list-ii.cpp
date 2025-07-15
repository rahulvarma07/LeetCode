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
    ListNode* reverse(ListNode* root){
        ListNode* prev = NULL;
        ListNode* curr = root;
        while(curr != NULL){
            ListNode* nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;

        ListNode* start = NULL;
        ListNode* end = NULL;
        ListNode* prev = NULL;
        ListNode* temp = head;

        int pos = 1;
        while(temp){
            if(pos == left-1 ){
                prev = temp;
            }
            else if(pos == left){
                start = temp;
            }
            else if(pos == right){
                end = temp->next;
                temp->next = NULL;
                ListNode* reversed = reverse(start);
                if(prev){
                    prev->next = reversed;
                }
                else head = reversed;
                start->next = end;
                break;
            }
            pos++;
            temp = temp->next;
        }
        return head;
    }
};