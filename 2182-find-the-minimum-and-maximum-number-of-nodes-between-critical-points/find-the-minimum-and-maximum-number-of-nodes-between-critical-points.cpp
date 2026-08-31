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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first = -1, last = -1, minn = INT_MAX;
        ListNode* temp = head->next;
        ListNode* prev = head;
        int cnt = 2;
        while(temp->next != NULL) {
            if((temp->val > prev->val && temp->val > temp->next->val) || (temp->val < prev->val && temp->val < temp->next->val)) {
                if(first == -1) {
                    first = cnt;
                }else {
                    minn = min(minn, (cnt-last));
                }
                last = cnt;
            }
            prev = temp;
            temp = temp->next;
            cnt++;
        }
        if(first == -1 || minn == INT_MAX) return {-1, -1};
        return {minn, (last - first)};
    }
};