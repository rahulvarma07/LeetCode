class Solution {
public:
    bool isValid(unordered_map<char, int>&check1, unordered_map<char, int>&check2){
        if(check1.size() != check2.size()) return false;
        for(auto a:check1){
            if(check2.count(a.first) == 0 || check2.at(a.first) < a.second) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";
        unordered_map<char, int>check1;
        unordered_map<char, int>check2;
        for(auto a : t){
            check1[a]++;
        }
        int i = 0, j = 0, ans = INT_MAX;
        int x = 0, y = 0;
        while(j < s.size()){
            if(check1.count(s[j]) > 0){
                check2[s[j]]++;
            }
            while(isValid(check1, check2)){
                if((j-i)+1 < ans){
                    x = i, y = j;
                    ans = (j-i)+1;
                }
                if(check1.count(s[i]) > 0){
                    check2[s[i]]--;
                    if(check2[s[i]] == 0) check2.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        if(ans == INT_MAX) return "";
        string str = "";
        for(x; x <= y; x++){
            str += s[x];
        }
        return str;
    }
};