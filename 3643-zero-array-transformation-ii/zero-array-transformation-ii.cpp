class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        bool isTrue = true;
        for(auto a:nums){
            if(a != 0) isTrue = false;
        }
        if(isTrue) return 0;
        int low = 0, high = queries.size()-1;
        int ans = INT_MAX;
        while(low <= high){
            vector<int>dummy = nums;
            vector<int>sweep(dummy.size()+1, 0);
            int mid = low+(high-low)/2;
            bool canMakeZero = true;
            for(int i = 0; i <= mid; i++){
                int x = queries[i][0], y = queries[i][1], val = queries[i][2];
                sweep[x] -= val;
                sweep[y+1] += val;
            }
            for(int i = 1; i < sweep.size(); i++){
                sweep[i] += sweep[i-1];
            }
            for(int i = 0; i < dummy.size(); i++){
                dummy[i]+=sweep[i];
                if(dummy[i] > 0){
                    canMakeZero = false;
                    break;
                }
            }
            if(canMakeZero){
                high = mid-1;
                ans = min(ans, mid+1);
            }
            else low = mid+1;
        }
        return ans != INT_MAX?ans:-1;
    }
};