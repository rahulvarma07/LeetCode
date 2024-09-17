class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int>check;
        vector<string>ans;
        string str = "";
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != ' '){
                str += s1[i];
            }
            else{
                check[str]++;
                str = "";
            }
        }
        check[str]++;
        str = "";
        for(int i = 0; i < s2.size(); i++){
            if(s2[i] != ' '){
                str += s2[i];
            }
            else{
                check[str]++;
                str = "";
            }
        }
        check[str]++;
        str = "";
        for(auto a:check){
            if(a.second == 1){
                ans.push_back(a.first);
            }
        }
        check.clear();
        return ans;
    }
};