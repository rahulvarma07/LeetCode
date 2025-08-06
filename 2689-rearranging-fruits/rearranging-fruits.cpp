class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> freq1;
        unordered_map<int, int> freq2;
        int minn = INT_MAX;
        for(auto a: basket1){
            minn = min(minn, a);
            freq1[a]++;
        }
        for(auto a: basket2){
            minn = min(minn, a);
            if(freq1.find(a) != freq1.end()){
                freq1[a]--;
                if(freq1[a] <= 0) freq1.erase(a);
            }
            else{
                freq2[a]++;
            }
        }
        vector<int> basketArrOne;
        vector<int> basketArrTwo;
        for(auto a: freq1){
            if(a.second % 2 != 0) return -1;
            for(int i = 1; i <= a.second; i++){
                basketArrOne.push_back(a.first);
            }
        }
        for(auto a: freq2){
            if(a.second % 2 != 0) return -1;
            for(int i = 1; i <= a.second; i++){
                basketArrTwo.push_back(a.first);
            }
        }
        sort(basketArrOne.begin(), basketArrOne.end());
        sort(basketArrTwo.begin(), basketArrTwo.end());
        long long int ans = 0;
        int n = basketArrTwo.size(), gb = minn*2;
        int x = 0, y = n-1;
        while(x <= n-2 && y >= 1){
            ans += min(min(basketArrOne[x], basketArrTwo[y]), (gb));
            x+=2;
            y-=2;
        }
        return ans;
    }
};