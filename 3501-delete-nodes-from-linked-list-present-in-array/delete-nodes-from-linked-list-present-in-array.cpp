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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int>mymap;
        for(auto a:nums) mymap[a] = 1;
        ListNode* res = new ListNode(NULL);
        ListNode* temp = res;
        while(head != NULL){
            if(mymap.find(head->val) == mymap.end()){
                res->next = head;
                res = res->next;
                head = head->next;
            }
            else{
                head = head->next;
            }
        }
        res->next = NULL;
        res = res->next;
        return temp->next;
    }
};