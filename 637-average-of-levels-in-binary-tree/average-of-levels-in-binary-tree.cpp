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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        double lev = 0;
        double cnt = 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
           int s = q.size();
           lev = 0;
           for(int i = 0; i < s; i++){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
            lev += curr->val;
           } 
           ans.push_back(lev/s);
        }
        return ans;
    }
};