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
    int ans = 0;
    vector<int> getAverage(TreeNode* root) {
        if(root == NULL) return {0, 0};
        vector<int> l = getAverage(root->left);
        vector<int> r = getAverage(root->right);
        int totalSum = l[1] + r[1] + root->val;
        int totalCnt = l[0] + r[0] + 1;
        if(root->val == totalSum/totalCnt) ans++;
        return {totalCnt, totalSum};
    }
    int averageOfSubtree(TreeNode* root) {
        getAverage(root);
        return ans;
    }
};