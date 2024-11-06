class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        vector<int>setBits(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            int setCnt = 0;
            while(n > 0){
                n &= (n-1);
                setCnt++;
            }
            setBits[i] = setCnt;
        }
        int ind = 0;
        for(int i = 1; i < setBits.size(); i++){
            if(setBits[ind] == setBits[i]) continue;
            else{
                sort(nums.begin()+ind, nums.begin()+i);
                ind = i;
            }
        }
        sort(nums.begin()+ind, nums.end());
        for(auto a: nums) cout << a << " ";
        bool isTrue = true;
        for(int i = 1;i < nums.size(); i++){
            if(nums[i] < nums[i-1]){
                isTrue = false;
                break;
            }
        }
        if(isTrue) return true;
        return false;
    }
};