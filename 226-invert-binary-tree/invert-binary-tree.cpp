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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0; i < n; i++){
                TreeNode* curr = q.front();
                q.pop();
                TreeNode* lftprt = curr->left;
                curr->left = curr->right;
                curr->right = lftprt;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return root;
    }
};