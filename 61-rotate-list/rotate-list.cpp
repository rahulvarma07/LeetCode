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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        // Reverse the LL 
        int size = 0;
        ListNode* rev1 = NULL;
        ListNode* pres = head;
        ListNode* frnt = head->next;
        while(pres){
            pres->next = rev1;
            rev1 = pres;
            pres = frnt;
            if(frnt) frnt = frnt->next;
            if(rev1) size++;
        }
        k %= size;
        int cnt = 0;
        ListNode* rev2 = NULL;
        pres = rev1;
        frnt = rev1->next;
        while(cnt < k){
            pres->next = rev2;
            rev2 = pres;
            pres = frnt;
            if(frnt) frnt = frnt->next;
            cnt++;
        }

        ListNode* rev3 = NULL;
        while(cnt < size){
            pres->next = rev3;
            rev3 = pres;
            pres = frnt;
            if(frnt) frnt = frnt->next;
            cnt++;
        }
        if(!rev2) return rev3;
        if(!rev3) return rev2;
        ListNode* temp = rev2;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = rev3;
        return rev2;
    }
};