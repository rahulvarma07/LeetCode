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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL || list1 == NULL && list2 == NULL) return list2;
        if(list2 == NULL) return list1;
        ListNode* ans  = new ListNode(NULL);
        ListNode* head = ans;
        while(list1 && list2){
            if(list1->val <= list2->val){
                ListNode* dummy = list1;
                list1 = list1->next;
                ans -> next = dummy;
                ans = ans->next;
            }
            else if(list1->val > list2->val){
                ListNode* dummy = list2;
                list2 = list2->next;
                ans->next = dummy;
                ans = ans->next;
            }
        }
        while(list1){
            ans->next = list1;
            ans = ans->next;
            list1 = list1->next;
        }
        while(list2){
            ans -> next = list2;
            ans = ans->next;
            list2 = list2->next;
        }
        return head->next;
    }
};