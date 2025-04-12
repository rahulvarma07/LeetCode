class Solution {
public:
    vector<string> simplifiedFractions(int n) {
       map<double, string>check;
       for(int i = 1; i < n; i++){
        for(int j = 2; j <= n; j++){
            double x = (double)i/j;
            if(x > 0.0 && x < 1.0){
                if(check.find(x) == check.end()){
                    string str = "";
                    str += to_string(i);
                    str += '/';
                    str += to_string(j);
                    check[x] = str;
                }
            }
        }
       }
       vector<string>ans;
       for(auto a:check){
        ans.push_back(a.second);
       }
       return ans; 
    }
};