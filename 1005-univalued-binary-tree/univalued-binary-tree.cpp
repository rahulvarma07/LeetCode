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
    void travel(TreeNode* root, vector<int>&ans)
    {
        if(root == NULL)return;
        ans.push_back(root->val);
        travel(root->left,ans);
        travel(root->right,ans);
    }
    bool isUnivalTree(TreeNode* root) 
    {
        vector<int>ans;
        travel(root,ans); 
        int i = ans[0];
        int count = 0;
        for(auto a:ans)
        {
            if(a == i)count += 1;
        }  
        if(count == ans.size())return true;
        else return false; 
    }
};