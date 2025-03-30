class Solution {
public:
    vector<vector<int>> mergeTheCharacters(vector<vector<int>>&vec){
        vector<vector<int>>ans;
        vector<int>p = vec[0];
        for(int i = 1; i < vec.size(); i++){
            if(p[1] >= vec[i][0]){
                p[1] = max(p[1], vec[i][1]);
            }
            else{
                ans.push_back(p);
                p = vec[i];
            }
        }
        ans.push_back(p);
        return ans;
    }
    vector<int> partitionLabels(string s) {
        vector<vector<int>>points;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '*') continue;
            int sp = i;
            int lp = -1;
            for(int j = i+1; j < s.size(); j++){
                if(s[j] == s[sp]){
                    lp = j;
                    s[j] = '*';
                }
            }
            if(lp != -1){
                points.push_back({sp, lp});
            }
            else{
                points.push_back({sp, sp});
            }
        }

        vector<vector<int>>ans = mergeTheCharacters(points);
        vector<int>finalAns;
        for(int i = 0; i < ans.size(); i++){
            finalAns.push_back((ans[i][1] - ans[i][0])+1);
        }
        return finalAns;
    }
};