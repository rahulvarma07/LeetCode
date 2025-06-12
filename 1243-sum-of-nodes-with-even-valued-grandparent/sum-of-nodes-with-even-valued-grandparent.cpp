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
    int evalSum(TreeNode* root, int lev){
        if(root == NULL) return 0;
        if(lev == 0) return root->val;
        int l = evalSum(root->left, lev-1);
        int r = evalSum(root->right, lev-1);
        return l+r;
    }

    void BFS(TreeNode* &root, int &ans){
        if(root == NULL) return;
        if(root->val % 2 == 0){
            ans += evalSum(root,2);
        }
        BFS(root->left, ans);
        BFS(root->right, ans);
    }
    int sumEvenGrandparent(TreeNode* root) {
        int ans = 0;
        BFS(root, ans);
        return ans;
    }
};