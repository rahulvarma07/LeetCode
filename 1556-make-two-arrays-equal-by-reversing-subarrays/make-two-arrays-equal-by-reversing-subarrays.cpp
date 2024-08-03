class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int>check;
        for(auto a: target){
            check[a] += 1;
        }
        for(auto a: arr){
            if(check.find(a) == check.end()){
                return false;
            }
            else if(check.find(a) != check.end()){
                check[a] -= 1;
                if(check[a] < 1){
                    check.erase(a);
                }
            }
        }
        return true;
    }
};