class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefsum = 0;
        int ans = 0;
        unordered_map<int,int>mymap;
        mymap[0] = 1;
        for(int i = 0; i < nums.size(); i++){
           prefsum += nums[i];
           int rem = prefsum - k;
           if(mymap.find(rem) != mymap.end()){
            ans += mymap[rem];
           }
           mymap[prefsum] += 1;
        }
        return ans;
    }
};