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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp  = head;
        ListNode* prev = NULL;
        while(temp)
        {
            if (prev == NULL)
            {
                prev = head;
                temp = temp->next;
            }
            ListNode* x = temp;
            prev->next = temp->next;
            x->next = head;
            temp = prev->next;
            head = x;
        }
        ListNode* NewTemp = head;
        ListNode* Newtemp1 = head->next;
        while(Newtemp1)
        {
            if (NewTemp->val > Newtemp1->val)
            {
                NewTemp->next = Newtemp1->next;
                Newtemp1 = NewTemp->next;
            }
            else{
            NewTemp = NewTemp->next;
            Newtemp1 = Newtemp1->next;
            }
        }
        temp=head;
        prev = NULL;
        while(temp)
        {
            if (prev == NULL)
            {
                prev = head;
                temp = temp->next;
            }
            else
            {
            ListNode* x = temp;
            prev->next = temp->next;
            x->next = head;
            temp = prev->next;
            head = x;
            }
        }
        return head;


        
        
    }
};