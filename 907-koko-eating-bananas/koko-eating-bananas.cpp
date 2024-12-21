class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = -1;
        for(auto a:piles){
            high = max(high, a);
        }
        int low = 1;
        while(low <= high){
            int mid = (low + high)/2;
            long long int count = 0;
            for(int i = 0; i < piles.size(); i++){
                if(piles[i] <= mid) count += 1;
                else {
                   count += (piles[i]/mid);
                   count += (piles[i]%mid == 0)? 0 : 1;
                }
            }
            if(count > h) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
};