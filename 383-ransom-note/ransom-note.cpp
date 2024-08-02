class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char, int>check;
        bool ans = false;
        for(auto a: m){
            check[a] += 1;
        }
        for(auto a: r){
            if(check.find(a) == check.end()){
                return false;
            }
            else {
                ans = true;
                check[a] -= 1;
                if(check[a] < 1){
                    check.erase(a);
                }
            }
        }
        return ans;
    }
};