class Solution {
public:
    int cntSetBits(int n){
        int ans = 0;
        while(n > 0) {
            ans += (n % 2);
            n /= 2;
        }
        return ans;
    }
    vector<int> sortByBits(vector<int>& arr) {
        map<int, vector<int>> cntBitsMap;
        vector<int> ans;
        sort(arr.begin(), arr.end());
        for(auto a: arr){
            int cnt = cntSetBits(a);
            cntBitsMap[cnt].push_back(a);
        }
        for(auto a: cntBitsMap){
            for(auto b : a.second){
                ans.push_back(b);
            }
        }
        return ans;
    }
};