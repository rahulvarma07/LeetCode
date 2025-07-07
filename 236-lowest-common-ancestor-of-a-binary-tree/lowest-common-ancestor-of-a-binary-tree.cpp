/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* ans = NULL;
    bool LCAHelper(TreeNode* root, TreeNode* p, TreeNode* q){
        if(ans != NULL) return false;
        if(root == NULL) return false;

        bool leftCheck = LCAHelper(root->left, p, q);
        bool rightCheck = LCAHelper(root->right, p, q);

        if(leftCheck && ((root == p) || (root == q))){
            ans = root;
        }
        else if(rightCheck && ((root == p) || (root == q))){
            ans = root;
        }
        else if(leftCheck && rightCheck){
            ans = root;
        }

        return (leftCheck || rightCheck || root == p || root == q);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool finalAns = LCAHelper(root, p, q);
        return ans;
    }
};