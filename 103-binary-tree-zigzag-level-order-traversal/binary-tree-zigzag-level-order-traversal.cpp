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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        queue<TreeNode*>myq;
        myq.push(root);
        int flag = 1;
        while(!myq.empty()){
            int n = myq.size();
            flag == 1?flag = 0: flag = 1;
            vector<int>lvl;
            for(int i = 0; i < n; i++){
                TreeNode* myNode = myq.front();
                myq.pop();
                if(myNode->left)  myq.push(myNode->left);
                if(myNode->right) myq.push(myNode->right);
                lvl.push_back(myNode->val);
            }
            if(flag == 1) reverse(lvl.begin(), lvl.end());
            ans.push_back(lvl);
        }
        return ans;
    }
};