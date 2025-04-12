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
    void Trav(TreeNode* root, long long int val){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            val += (root->val);
            ans += val;
            return;
        }
        Trav(root->left, (val+(root->val))*10);
        Trav(root->right, (val+(root->val))*10);
    }
    int sumNumbers(TreeNode* root) {
        Trav(root, 0);
        return ans;
    }
};