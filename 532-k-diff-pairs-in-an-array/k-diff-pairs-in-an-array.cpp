class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.size() == 1) return 0;
        unordered_map<int, int>check;
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(auto a: nums) cout << a << " ";
        cout << endl;
        for(int i = 0; i < nums.size(); i++){
            int rem = nums[i]-k;
            if(check.find(rem) != check.end() && check[nums[i]] == 0){
                ans += 1;
            }
            check[nums[i]]++;
        }
        if(check.size() == 1) return 1;
        if(k == 0){
            for(auto a: check) ans += (a.second / 2);
        }
        return ans;
    }
};