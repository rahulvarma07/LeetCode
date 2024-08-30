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
    void Check(TreeNode* p, TreeNode* q, bool &ans){
        if(ans == false) return;
        if(p == NULL || q == NULL){
            if(p != q) ans = false;
            return;
        }
        if(p->val != q->val) ans = false;
        Check(p->left, q->left, ans);
        Check(p->right, q->right, ans);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans = true;
        Check(p, q, ans);
        return ans;
    }
};