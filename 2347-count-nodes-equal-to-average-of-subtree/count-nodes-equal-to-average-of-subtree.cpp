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
    void getAverage(TreeNode* root, int &sum, int &cnt) {
        if(root == NULL) return;
        sum += root->val;
        cnt++;
        getAverage(root->left, sum, cnt);
        getAverage(root->right, sum, cnt);
    }
    void traverse(TreeNode* root, int &ans) {
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) {
            ans++;
            return;
        }
        int sum = 0, cnt = 0;
        getAverage(root, sum, cnt);
        if(root->val == (int)(sum/cnt)) {
            ans++;
        }
        traverse(root->left, ans);
        traverse(root->right, ans);
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        traverse(root, ans);
        return ans;   
    }
};