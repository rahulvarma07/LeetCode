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
    ListNode* reverseNodes(ListNode* head){
        if(head == NULL) return head;
        ListNode* prev = NULL;
        ListNode* pres = head;
        while(pres){
            ListNode* fut = pres->next;
            pres->next = prev;
            prev = pres;
            pres = fut;
        }
        return prev;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        int cnt = 1;
        ListNode* ans = new ListNode(-1);
        ListNode* ansRef = ans;
        bool isTrue = true;
        while(head){
            int k = cnt;
            int check = 0;
            ListNode* dummy = new ListNode(-1);
            ListNode* dummyRef = dummy;
            while(k-- && head){
                dummy->next = head;
                dummy = dummy->next;
                head = head->next;
                check++;
            }
            if(check == 0) break;
            if(check%2 == 0){
                dummy->next = NULL;
                ListNode* reversed = reverseNodes(dummyRef->next);
                while(reversed){
                    ans->next = reversed;
                    reversed = reversed->next;
                    ans = ans->next;
                }
            }
            else{
                dummy->next = NULL;
                dummyRef = dummyRef->next;
                while(dummyRef){
                    ans->next = dummyRef;
                    dummyRef = dummyRef->next;
                    ans = ans->next;
                }
            }
            cnt++;
        }
        ans->next = NULL;
        return ansRef->next;
    }
};