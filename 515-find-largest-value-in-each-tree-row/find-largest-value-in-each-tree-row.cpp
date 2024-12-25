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
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL) return {};
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>arr;
            for(int i = 0; i < n; i++){
                TreeNode* newNode = q.front();
                q.pop();
                arr.push_back(newNode->val);
                if(newNode->left)q.push(newNode->left);
                if(newNode->right)q.push(newNode->right);
            }
            int maxx = INT_MIN;
            for(auto a:arr){
                maxx = max(maxx, a);
            }
            ans.push_back(maxx);
        }
        return ans;
    }
};