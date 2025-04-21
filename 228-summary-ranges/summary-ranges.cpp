class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size() == 0) return {};
        if(nums.size() == 1) return {to_string(nums[0])};
        int x = 0;
        vector<string>ans;
        int i = 1;
        for(; i < nums.size(); i++){
            if(nums[i] == nums[i-1]+1){
                continue;
            }
            else{
                if(x == i-1){
                    ans.push_back(to_string(nums[x]));
                }
                else{
                    string str = to_string(nums[x]);
                    str += "->";
                    str += to_string(nums[i-1]);
                    ans.push_back(str);
                }
                x = i;
            }
        }
        if(x == i-1){
            ans.push_back(to_string(nums[x]));
        }
        else{
            string str = to_string(nums[x]);
            str += "->";
            str += to_string(nums[i-1]);
            ans.push_back(str);
        }
        return ans;
    }
};