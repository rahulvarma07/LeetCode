class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        map<string, int>check2;
        int maxx = 0;
        for(int i = 0; i < responses.size(); i++){
            map<string, int>check1;
            for(auto a:responses[i]){
                check1[a]++;
            }
            for(auto a:check1){
                check2[a.first]++;
                maxx = max(maxx, check2[a.first]);
            }
        }
        string ans = "";
        for(auto a:check2){
            if(a.second == maxx) return a.first;
        }
        return ans;
    }
};