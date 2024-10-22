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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long int>levelSum;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            long long int sum = 0;
            for(int i = 0; i < n; i++){
                TreeNode* curr = q.front();
                q.pop();
                sum += (curr->val);
                if(curr->left != NULL)q.push(curr->left);
                if(curr->right != NULL)q.push(curr->right);
            }
            levelSum.push_back(sum);
        }
        sort(levelSum.begin(), levelSum.end());
        for(auto a: levelSum) cout << a << " ";
        int n = levelSum.size();
        if(n < k) return -1;
        return levelSum[(n-k)];
    }
};