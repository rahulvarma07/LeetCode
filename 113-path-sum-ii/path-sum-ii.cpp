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
    void bfs(TreeNode* root, int target, vector<vector<int>> &ans, vector<int> p) {
        if(root == NULL) return;
        target -= root->val;
        p.push_back(root->val);
        if(root->left == NULL and root->right == NULL) {
            if(target == 0) {
                ans.push_back(p);
            }
        }
        bfs(root->left, target, ans, p);
        bfs(root->right, target, ans, p);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        bfs(root, targetSum, ans, {});
        return ans;
    }
};