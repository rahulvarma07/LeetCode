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
    int mod = 1e9+7;
    void travelTree(TreeNode* root, long long int &treeSum) {
        if(root == NULL) return;
        treeSum += root->val;
        travelTree(root->left, treeSum);
        travelTree(root->right, treeSum);
    }
    long long int getSumAtEachEdge(TreeNode *root, long long int &treeSum, long long int &maxx) {
        if(root == NULL) {
            return 0;
        }
        long long int left = getSumAtEachEdge(root->left, treeSum, maxx);
        long long int right = getSumAtEachEdge(root->right, treeSum,  maxx);
        long long int currVal = (root->val + left + right);
        long long int split = (treeSum - currVal);
        long long int prod = (currVal * split);
        maxx = max(maxx, prod);
        return currVal;
    }
    int maxProduct(TreeNode* root) {
        long long int treeSum = 0;
        long long int maxx = -1;
        travelTree(root, treeSum);
        int ans = getSumAtEachEdge(root, treeSum, maxx);
        return (maxx % mod);
    }

};