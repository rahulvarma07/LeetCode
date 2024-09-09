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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        // m rows 
        // n col
        ListNode* temp = head;
        vector<vector<int>>ans(m, vector<int>(n,-1));
        int l  = 0, t = 0, r = n-1, b = m-1;
        while(temp && (l <= r) && (t <= b)){
            for(int i = l; i <= r; i++){
                if(temp){
                        ans[l][i] = temp->val;
                        temp = temp->next;
                    }
                else break;
            }
            t++;
            for(int i = t; i <= b; i++){
                if(temp){
                        ans[i][r] = temp->val;
                        temp = temp->next;
                    }
                else break;
                
            }
            r--;
            if(t <= b){
                for(int i = r; i >= l; i--){
                if(temp){
                        ans[b][i] = temp->val;
                        temp = temp->next;
                    }
                else break;
            }
            b--;
            }
            if(l <= r){
                for(int i = b; i >= t; i--){
                    if(temp){
                        ans[i][l] = temp->val;
                        temp = temp->next;
                    }
                    else break;
                }
                l ++;
            }
        }
        return ans;
    }
};