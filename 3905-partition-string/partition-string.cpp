class Solution {
public:
    vector<string> partitionString(string s) {
        map<string, bool> check;
        vector<string> ans;
        string str = "";
        for(int i = 0; i < s.size(); i++){
            str += s[i];
            if(check.find(str) == check.end()){
                ans.push_back(str);
                check[str] = true;
                str = "";
            }
        }
        return ans;
    }
};