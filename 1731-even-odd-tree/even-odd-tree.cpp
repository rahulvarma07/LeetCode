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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int level = 0;
        while(q.size() > 0){
            int n = q.size();
            vector<int>levelVal;
            for(int i = 0; i < n; i++){
                TreeNode* currNode = q.front();
                levelVal.push_back(currNode->val);
                q.pop();
                if(currNode->left){
                    q.push(currNode->left);
                }
                if(currNode->right){
                    q.push(currNode->right);
                }
            }
            if(level % 2 == 0){
                if(levelVal[0]%2 == 0) return false;
                for(int i = 1; i < levelVal.size(); i++){
                    if(levelVal[i]%2 == 0 || levelVal[i] <= levelVal[i-1]) return false;
                }
            }
            else{
                if(levelVal[0]%2 != 0) return false;
                for(int i = 1; i < levelVal.size(); i++){
                    if(levelVal[i]%2 != 0 || levelVal[i]  >= levelVal[i-1]) return false;
                }
            }
            level++;
        }
        return true;
    }
};