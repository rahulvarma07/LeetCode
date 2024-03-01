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
    void travel(TreeNode* root,vector<int>&ans)
    {
        if(root == NULL)return;
        ans.push_back(root->val);
        travel(root->left,ans);
        travel(root->right,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        vector<int>ans;
        travel(root,ans); 
        int sum = 0;
        for(auto a:ans)
        {
            if(a >= low and a <= high)
            {
                sum += a;
            }
        }
        return sum;
    }
};