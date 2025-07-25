class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            int sum = nums[i];
            vector<int>data;
            data.push_back(sum);
            unordered_map<int, int>check;
            check[sum]++;
            int negCount = (nums[i] < 0)?1:0;
            for(int j = i+1; j < nums.size(); j++){
                if(check.find(nums[j]) == check.end()){
                    sum += nums[j];
                    check[nums[j]]++;
                    data.push_back(nums[j]);
                    if(nums[j] < 0) negCount++;
                }
            }
            if(negCount == data.size()){
                ans = max(ans, *max_element(data.begin(), data.end()));
            }
            else{
                int s = 0;
                for(int i = 0; i < data.size(); i++){
                    if(data[i] > 0) s += data[i];
                }
                ans = max(ans, s);
            }
        }
        return ans;
    }
};