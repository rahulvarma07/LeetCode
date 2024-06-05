class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    vector<string>ans;
    vector<int>freq1(26, 101);
    for(int i = 0; i < words.size(); i++){
        vector<int>freq2(26, 0);
        for(auto ch:words[i]){
            freq2[ch - 'a'] += 1;
        }

        for(char i = 'a'; i <= 'z'; i++){
            freq1[i - 'a'] = min(freq1[i - 'a'], freq2[i - 'a']);
        }
    }
    for(char i = 'a'; i <= 'z'; i++){
        while(freq1[i - 'a'] --){
            ans.push_back(string(1, i));
        }
    }
    return ans;
    }
};