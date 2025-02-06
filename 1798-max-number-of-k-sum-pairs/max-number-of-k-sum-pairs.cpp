class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int>check;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            int t = k-nums[i];
            if(check.find(t) != check.end()){
                ans++;
                check[t]--;
                if(check[t] == 0) check.erase(t);
            }
            else{
                check[nums[i]]++;
            }
        }
        return ans;
    }
};