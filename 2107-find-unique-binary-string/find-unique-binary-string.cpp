class Solution {
public:
    map<string, int>check;
    string finalAns = "";
    void compute(int ind, string &str, string ans, int n){
        if(ind == n){
            if(check.find(ans) == check.end()){
                finalAns = ans;
            }
            return;
        }
        if(finalAns.size() > 0) return;
        for(int i = 0; i < str.size(); i++){
            ans += str[i];
            compute(ind+1, str, ans, n);
            ans.pop_back();
        }
    }
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        string str = "01";
        int ind = 0, n = nums[0].size();
        for(auto a: nums){
            check[a]++;
        }
        compute(ind, str, ans, n);
        return finalAns;
    }
};