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
        if(head == NULL || head->next == NULL)return head;
        ListNode* temp = head;
        ListNode* front = temp->next;
        ListNode* head2 = front;
        while(front != NULL && front->next != NULL){
            temp->next = front->next;
            temp = temp->next;
            front->next = temp->next;
            front = front->next;
        }
        temp->next = head2;
        return head;
    }
};