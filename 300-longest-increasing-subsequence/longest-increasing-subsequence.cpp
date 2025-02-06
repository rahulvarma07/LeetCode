class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>longestSub;
        for(int i = 0; i < nums.size(); i++){
            if(longestSub.size() == 0) longestSub.push_back(nums[i]);
            else if(nums[i] > longestSub.back()) longestSub.push_back(nums[i]);
            else{
                int l = 0, h = longestSub.size()-1;
                while(l <= h){
                    int mid = (l+h)/2;
                    if(longestSub[mid] >= nums[i]) h = mid-1;
                    else l = mid+1;
                }
                cout << h;
                longestSub[l] = nums[i];
            }
        }
        return (longestSub.size());
    }
};