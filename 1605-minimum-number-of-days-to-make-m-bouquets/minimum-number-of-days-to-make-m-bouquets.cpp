class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {  
     if((long long)m*(long long)k > bloomDay.size()) return -1;
     int minnDay = INT_MAX, maxxDay = 0;
     for(auto a:bloomDay){
        minnDay = min(minnDay, a);
        maxxDay = max(maxxDay, a);
     }
     int l = minnDay, r = maxxDay;
     while(l <= r){
        long long int mid = (l+r)/2;
        int cnt = 0;
        int ps = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= mid){
                ps++;
            }
            else{
                ps = 0;
            }
            if(ps == k){
                ps = 0;
                cnt++;
            }
        }
        if(cnt < m) l = mid+1;
        else r = mid-1;
     }
     return l;
    }
};