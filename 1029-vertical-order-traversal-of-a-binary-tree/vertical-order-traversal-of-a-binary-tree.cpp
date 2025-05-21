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
    map<vector<int>, vector<int>>mp;
    void Trav(TreeNode* root, int p1, int p2){
        if(root == NULL) return;
        Trav(root->left, p1+1, p2-1);
        Trav(root->right, p1+1, p2+1);
        mp[{p2,p1}].push_back(root->val);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        Trav(root, 0, 0);
        map<int, vector<int>>checks;
        vector<vector<int>>ans;
        for(auto a:mp){
            int x = a.first[0];
            sort(a.second.begin(), a.second.end());
            for(auto a1:a.second){
                checks[x].push_back(a1);
            }
        }
        for(auto a:checks){
            vector<int>p = a.second;
            ans.push_back(a.second);
        }
        return ans;
    }
};