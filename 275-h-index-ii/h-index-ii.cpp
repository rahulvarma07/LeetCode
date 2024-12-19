class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l = 0, h = -1;
        for(auto a: citations){
            h = max(h, a);
        }
        int ans = 0;
        while(l <= h){
            int mid = (l+h)/2;
            int cnt = 0;
            for(int i = 0; i < citations.size(); i++){
                if(mid <= citations[i]) cnt++;
            }
            if(cnt >= mid){
                l = mid+1;
                ans = max(ans, mid);
            }
            else{
                h = mid-1;
            }
        }
        return ans;
    }
};