class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        if(nums.size() == 1) return true;
        vector<int>primes(1001, 1);
        for(int i = 2; i < 1001; i++){
            if(primes[i] == 1){
                for(int j = i*i ; j < 1001; j+=i){
                    primes[j]=0;
                }
            }
        }
        for(int i = 0; i < nums.size(); i++){
            for(int j = nums[i]-1; j >= 2; j--){
                if(primes[j] == 1 && i == 0){
                    nums[i] -= j;
                    break;
                }
                else if(i != 0 && primes[j] == 1){
                    if(nums[i]-j > nums[i-1]){
                        nums[i] -= j;
                        break;
                    }
                }
            }
        }
        bool istrue = true;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] <= nums[i-1]) istrue = false;
        }
        return istrue;
    }
};