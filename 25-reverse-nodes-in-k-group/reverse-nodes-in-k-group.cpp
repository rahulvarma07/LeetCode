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
    ListNode* ReverseNodes(ListNode* head){
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

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL) return head;
        int cnt = 1;
        if(k == 1) return head;
        ListNode* ans = new ListNode(-1);
        ListNode* ansHead = ans;
        ListNode* dummy = head;
        ListNode* dummyHead = dummy;
        head = head->next;
        while(head != NULL){
            cnt++;
            dummy->next = head;
            dummy = dummy->next;
            head = head->next;
            if(cnt%k == 0){
                cout << cnt << " ";
                dummy->next = NULL;
                ListNode* reversed = ReverseNodes(dummyHead);
                while(reversed){
                    ans->next = reversed;
                    ans = ans->next;
                    reversed = reversed->next;
                }
                cout << endl;
                dummyHead = head;
                dummy = head;
                if(head){
                   cnt++;
                    head = head->next;
                }
            }
        }
        while(dummyHead){
            ans->next = dummyHead;
            dummyHead = dummyHead->next;
            ans = ans->next;
        }
        ans->next = NULL;
        return ansHead->next;
    }
};