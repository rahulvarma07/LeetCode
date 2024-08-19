/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == headB) return headA;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int len1 = 1;
        int len2 = 1;
        while(temp1 != NULL || temp2 != NULL){
            if(temp1){
                temp1 = temp1->next;
                len1 ++;
            }
            if(temp2){
                temp2 = temp2->next;
                len2 ++;
            }
        }
        temp1 = headA;
        temp2 = headB;
        int a = 0, b = 0;
        if(len1 > len2){
            a = len1-len2;
        }
        else{
            b = len2-len1;
        }

        while(a--){
            temp1=temp1->next;
        }
        while(b--){
            temp2 = temp2->next;
        }

        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
};