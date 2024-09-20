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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        queue<TreeNode*>myq;
        vector<int>lvl;
        myq.push(root);
        while(!myq.empty()){
            int n = myq.size();
            for(int i = 0; i < n; i++){
                TreeNode* myNode = myq.front();
                myq.pop();
                if(myNode->left)myq.push(myNode->left);
                if(myNode->right)myq.push(myNode->right);
                lvl.push_back(myNode->val);
            }
            ans.push_back(lvl);
            lvl.clear();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};