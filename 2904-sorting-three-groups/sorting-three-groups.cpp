class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       vector<int>LIS;
       for(int i = 0; i < nums.size(); i++){
        if(LIS.size() == 0 || nums[i] >= LIS.back()){
            LIS.push_back(nums[i]);
            continue;
        }
        else{
            int low = 0, high = LIS.size()-1;
            while(low <= high){
                int mid = (low + high)/2;
                if(LIS[mid] > nums[i]) high = mid-1;
                else low = mid+1;
            }
            LIS[low] = nums[i];
        }
       }
       for(auto a:LIS) cout << a << " ";
       return nums.size()-LIS.size();
    }
};