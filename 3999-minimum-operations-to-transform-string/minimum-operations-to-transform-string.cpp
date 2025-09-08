class Solution {
public:
    int minOperations(string s) {
        string str = "bcdefghijklmnopqrstuvwxyz";
        unordered_map<char, int> freq;
        for(auto a: s) freq[a]++;
        int ans = 0;
        for(int i = 0; i < str.size(); i++){
            if(freq.find(str[i]) != freq.end()){
                ans += 1;
                freq[str[i]+1] = 1;
            }
        }
        return ans;
    }
};