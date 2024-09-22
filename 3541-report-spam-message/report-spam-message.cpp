class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_map<string, int>check;
        for(auto a: bannedWords){
            check[a]++;
        }
        int cnt = 0;
        for(auto a: message){
            if(check.find(a) != check.end()){
                cnt++;
            }
            if(cnt >= 2) return true;
        }
        return false;
    }
};