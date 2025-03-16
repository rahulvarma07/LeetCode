class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long int low = 1, high = 1e14;
        while(low <= high){
            long long int mid =  low + (high-low)/2;
            long long int cnt = 0;
            for(int i = 0; i < ranks.size(); i++){
                long long int x = (long long int)(mid/ranks[i]);
                cnt += sqrtl(x);
            }
            if(cnt >= cars) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};