/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int ans = -1, maxxSum = INT_MIN, l = 0;
        while(!q.empty()){
            int n = q.size();
            int sum = 0;
            l++;
            for(int i = 0; i < n; i++){
                TreeNode* dummy = q.front();
                q.pop();
                sum += dummy->val;
                if(dummy->left) q.push(dummy->left);
                if(dummy->right) q.push(dummy->right);
            }
            // cout << sum << " ";
            if(sum > maxxSum){
                ans = l; 
                maxxSum = sum;
            }
        }
        return ans;
    }
};