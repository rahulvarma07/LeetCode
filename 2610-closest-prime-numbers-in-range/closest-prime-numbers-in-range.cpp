class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans(2, -1); 
        vector<int>seive(right+1, 1);
        for(int i = 2; i <= right; i++){
            if((long long)i*i > 1e6+2) break;
            if(seive[i] == 1){
                for(int j = i*i; j <= right; j += i){
                    seive[j] = 0;
                }
            }
        }
        vector<int>arr;
        for(int i = left; i <= right; i++){
            if(i == 1) continue;
            if(seive[i] == 1) arr.push_back(i);
        }
        if(arr.size() == 1 || arr.size() == 0) return ans;
        map<int, vector<int>>mp;
        for(int i = 1; i < arr.size(); i++){
            int diff = arr[i]-arr[i-1];
            if(mp.find(diff) != mp.end()) continue;
            else mp[diff] = {arr[i-1], arr[i]};
        }
        return mp.begin()->second;
    }
};