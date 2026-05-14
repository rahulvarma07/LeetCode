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
    bool operator()(ListNode* node1, ListNode* node2) {
        return node1->val > node2->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = new ListNode(-1);
        ListNode* temp = head; 
        priority_queue<ListNode*, vector<ListNode*>, Comparator> pq;
        for(ListNode* a : lists) {
           if(a != NULL) pq.push(a);
        }
        while(!pq.empty()) {
            ListNode* topNode = pq.top();
            pq.pop();
            temp->next = topNode;
            temp = temp->next;
            if(topNode->next != NULL) {
                pq.push(topNode->next);
            }
        }
        return head->next;
    }
};