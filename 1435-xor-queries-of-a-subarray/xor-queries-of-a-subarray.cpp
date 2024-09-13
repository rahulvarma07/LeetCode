class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i = 1; i < arr.size(); i++) arr[i] ^= arr[i-1];
        for(int i = 0; i < queries.size(); i++){
            int x = queries[i][0];
            int y = queries[i][1];
            if(x == 0){
                ans.push_back(arr[y]);
            }
            else{
                ans.push_back(arr[y]^arr[x-1]);
            }
        }
        return ans;
    }
};