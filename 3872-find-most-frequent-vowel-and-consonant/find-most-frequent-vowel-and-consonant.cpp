class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    int maxFreqSum(string s) {
        unordered_map<char,  int>mp;
        for(auto a:s) mp[a]++;
        int sum1 = 0, sum2 = 0;
        for(auto a:mp){
            if(isVowel(a.first)){
                sum1 = max(sum1,a.second);
            }
            else{
                sum2 = max(sum2, a.second);
            }
        }
        return sum1+sum2;
    }
};