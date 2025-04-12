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
    vector<vector<int>>ans;
    void trav(TreeNode* root, int TarSum, vector<int>path){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            path.push_back(root->val);
            TarSum -= root->val;
            if(TarSum == 0){
                ans.push_back(path);
            }
            return;
        }
        path.push_back(root->val);
        trav(root->left, TarSum-root->val, path);
        trav(root->right, TarSum-root->val, path);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        trav(root, targetSum, path);
        return ans;
    }
};