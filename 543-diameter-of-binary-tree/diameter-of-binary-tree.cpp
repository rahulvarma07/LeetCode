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
    int ans = -1000;
    int heights(TreeNode* root){
        if(root == NULL) return 0;
        int l = heights(root->left);
        int r = heights(root->right);
        ans = max(ans, (l+r));
        return max(l, r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        heights(root);
        return ans;
    }
};