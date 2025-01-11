class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;
        int e = 0, o = 0;
        unordered_map<int,int>check;
        for(auto a: s){
            check[a]++;
        }
        for(auto a:check){
            if(a.second % 2 == 0) e++;
            else o++;
        }
        if(e+o == k) return true;
        else if(e == 0 && o > k) return false;
        else if(e == 0 && o == k) return true;
        else if(o > k) return false;
        else return true;
    }
};