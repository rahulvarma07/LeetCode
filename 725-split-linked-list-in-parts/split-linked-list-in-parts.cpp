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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        int size = 0;
        ListNode* temp = head;
        while(temp){
            size++;
            temp = temp->next;
        }
        temp = head;
        if(size <= k){
            while(temp){
                k--;
                ListNode* dummy = new ListNode(temp->val);
                ans.push_back(dummy);
                temp = temp->next;
            }
            while(k--){
                ans.push_back(temp);
            }
        }

        else{
            int toPut = size%k;
            int d = k;
            while(d-- && temp){
                ListNode* dummy = new ListNode(temp->val);
                ListNode* dh = dummy;
                int x = size/k;
                temp = temp->next;
                while(--x && temp){
                    dummy->next = temp;
                    temp = temp->next;
                    dummy = dummy->next;
                }
                if(toPut && temp){
                    dummy->next = temp;
                    dummy = dummy->next;
                    temp = temp->next;
                    toPut--;
                }
                dummy->next = NULL;
                ans.push_back(dh);
            }
        }
        return ans;
    }
};