class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int>w1;
        unordered_map<string, int>w2;
        for(auto a:words1){
            w1[a] ++;
        }
        for(auto a:words2){
            w2[a] ++;
        }
        int ans = 0;
        for(int i = 0; i< words2.size(); i++){
            string a = words2[i];
            if(w1[a] == 1 and w2[a] == 1) ans += 1;
        }
        return ans;
    }
};