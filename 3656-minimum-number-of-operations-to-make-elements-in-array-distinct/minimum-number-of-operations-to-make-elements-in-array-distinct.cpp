class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       int count = 0;
        int i = 0, j = 0, x = 0;
        int l = nums.size() - (nums.size()%3);
        for( ; i < nums.size(); i += 3){
            bool isfound = false;
            for(j = i; j < nums.size(); j++){
                for(x = j+1; x < nums.size(); x++){
                    if(nums[j] == nums[x]){
                        isfound = true;
                    }
                }
                if(isfound) break;
            }
            if(isfound) count++;
        }
        return count;
    }
};