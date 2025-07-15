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
    int helper(TreeNode* root, int ans){
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return (ans*10 + root->val);
        int leftHelp = helper(root->left, (ans*10)+root->val);
        int rightHelp = helper(root->right, (ans*10)+root->val);
        return leftHelp + rightHelp;
    }
    int sumNumbers(TreeNode* root) {
        if(root == NULL) return 0;
        return helper(root, 0);
    }
};