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
    // vector<int>p1, p2;
    void trav(TreeNode* root, vector<int>&p){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            p.push_back(root->val);
            return;
        }
        trav(root->left, p);
        trav(root->right, p);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>p1, p2;
        trav(root1, p1);
        trav(root2, p2);
        return (p1 == p2);
    }
};