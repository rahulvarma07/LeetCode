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

class Comparator {
public:
    bool operator()(ListNode* x, ListNode* y){
        return (x->val)>(y->val);
    }
 };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Comparator> pq;
        for(ListNode* list : lists) {
            if(list) pq.push(list);
        }
        ListNode *ans = new ListNode(-1), *t;
        t=ans;
        while(!(pq.empty())) {
            ListNode *top = pq.top();
            cout<<top->val<<' ';
            pq.pop();
            t->next = top;
            t=top;
            if(top and top->next) pq.push(top->next);
        }
        return ans->next;
    }
};