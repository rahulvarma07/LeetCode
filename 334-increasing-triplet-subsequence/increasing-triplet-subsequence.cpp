class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int>arr;
        for(int i = 0; i < nums.size(); i++){
            if(arr.size() == 0) arr.push_back(nums[i]);
            else if(nums[i] > arr.back()) arr.push_back(nums[i]);
            else{
                int l = 0, h = arr.size()-1;
                while(l <= h){
                    int mid = (l+h)/2;
                    if(arr[mid] >= nums[i]) h = mid-1;
                    else l = mid+1;
                }
                arr[l] = nums[i];
            }
            if(arr.size() == 3) return 1;
        }
        return 0;
    }
};