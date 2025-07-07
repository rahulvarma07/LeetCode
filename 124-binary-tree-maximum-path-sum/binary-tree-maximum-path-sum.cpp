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
    int ans = INT_MIN;
    int findMaxSum(TreeNode* root){
        if(root == NULL) return 0;
        int leftSum = findMaxSum(root -> left);
        int rightSum = findMaxSum(root -> right);
        int checkSum = root->val + leftSum + rightSum;
        ans = max(ans, checkSum);
        int checkVal = max(leftSum, rightSum);
        checkSum = root->val + (checkVal < 0 ? 0 : checkVal);
        ans = max(ans, checkSum);
        return checkSum;
    }
    int maxPathSum(TreeNode* root) {
        int finAns = findMaxSum(root);
        return ans;   
    }
};