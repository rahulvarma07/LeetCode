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
    void trav(TreeNode* root, vector<int>&arr){
        if(root == NULL) return;
        arr.push_back(root->val);
        trav(root->left, arr);
        trav(root->right, arr);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int>arr;
        trav(root, arr);
        sort(arr.begin(), arr.end());
        vector<vector<int>>ans;
        for(auto a:queries){
            int l = 0, h = arr.size()-1;
            while(l <= h){
                int mid = (l+h)/2;
                if(arr[mid] <= a){
                    l = mid+1;
                }
                else h = mid-1;
            }
            if(h < 0){
                ans.push_back({-1, arr[l]});
            }
            else if(arr[h] == a){
                ans.push_back({a,a});
            }
            else if(l == arr.size()){
                ans.push_back({arr[h],-1});
            }
            else{
                ans.push_back({arr[h], arr[l]});
            }
        }
        return ans;
    }
};