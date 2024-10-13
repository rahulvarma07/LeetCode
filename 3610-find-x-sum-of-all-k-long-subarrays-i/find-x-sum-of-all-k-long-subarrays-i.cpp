class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>ans;
        unordered_map<int,int>check;
        for(int i = 0; i < nums.size()-k+1; i++){
            check.clear();
            int res = 0;
            int d = x;
            int maxx = INT_MIN;
            for(int j = i; j < i+k; j++){
                check[nums[j]] ++;
            }
            for(auto a:check){
                maxx = max(maxx, a.second);
            }
            while(d > 0){
                int ind = INT_MIN;
                bool istrue = false;
                for(auto a:check){
                    if(a.second == maxx){
                        istrue = true;
                        ind = max(ind, a.first);
                    }
                }
                if(istrue){
                    res += (check[ind]*ind);
                    check.erase(ind);
                    d--;
                }
                else{
                    maxx -= 1;
                }
                if(check.size() == 0) break;
            }
            ans.push_back(res);
        }
        return ans;
    }
};