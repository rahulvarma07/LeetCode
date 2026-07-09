class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 0;
        for(int i = 0; i<piles.size();i++){
            if(high < piles[i])
                high = piles[i];
        }
        int mid;
        while(low <= high) {
            mid =  low + (high - low)/2;
        long long int hrs = 0;
        for(int i = 0; i < piles.size(); i++){
            if(piles[i] > mid && piles[i]%mid != 0)
                    hrs = hrs + (piles[i]/mid) + 1; 
            else if(piles[i]%mid ==0)
                    hrs = hrs + (piles[i]/mid);
                else
                    hrs = hrs + 1;
                
        }
        if(hrs > h)
            low = mid + 1;
        else
            high = mid - 1;
        }
        return low;
    }
};