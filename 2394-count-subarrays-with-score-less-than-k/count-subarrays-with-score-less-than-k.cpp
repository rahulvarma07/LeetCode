class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long int res = 0;
        long long int i = 0, j = 0;
        long long int sum = 0;
        while(i <= j && j < nums.size()){
            sum += (nums[j]);
            while(sum*(j-i+1) >= k && i <= j){
                sum -= nums[i];
                i++;
            }
            if(sum*(j-i+1) < k){
                cout << j << " " << i << endl;
                res += ((j-i)+1);
            }
            j++;
        }
        return res;
    }
};