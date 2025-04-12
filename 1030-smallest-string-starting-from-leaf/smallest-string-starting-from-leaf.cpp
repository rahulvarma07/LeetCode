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
    string ans = "";
    void trav(TreeNode* root, string str){
        if(root == NULL) return;
        if(root->right == NULL && root->left == NULL){
            str += char('a'+root->val);
            reverse(str.begin(), str.end());
            if(ans.size() == 0) ans = str;
            else ans = min(ans, str);
            return;
        }
        str += char('a'+root->val);
        trav(root->left, str);
        trav(root->right, str);
    }
    string smallestFromLeaf(TreeNode* root) {
        trav(root, "");
        return ans;
    }
};