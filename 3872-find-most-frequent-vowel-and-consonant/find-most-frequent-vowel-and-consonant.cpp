class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> freq;
        for(int i = 0; i < s.size(); i++) {
            freq[s[i]] += 1;
        }
        int fv = 0, fc = 0;
        for(auto a: freq){
            if(a.first == 'a' || a.first == 'e' || a.first == 'i' || a.first == 'o' || a.first == 'u'){
                fv = max(fv, a.second);
            }else{
                fc = max(fc, a.second);
            }
        }
        return fv + fc;
    }
};