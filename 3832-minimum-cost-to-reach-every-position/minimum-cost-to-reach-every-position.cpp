class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int>ans;
        int minn = cost[0];
        for(int i = 0; i < cost.size(); i++){
            minn = min(minn, cost[i]);
            ans.push_back(minn);
        }
        return ans;
    }
};