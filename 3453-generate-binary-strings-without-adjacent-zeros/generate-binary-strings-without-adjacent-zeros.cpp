class Solution {
public:
    vector<string>ans;
    void compute(int ind, string &str, int n, string comp){
        if(ind == n){
            ans.push_back(comp);
            return;
        }
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '0'){
                if(comp.size() == 0 || comp.back() != '0'){
                    comp += '0';
                    compute(ind+1, str, n, comp);
                    comp.pop_back();
                }
            }
            else{
                comp += '1';
                compute(ind+1, str, n, comp);
                comp.pop_back();
            }
        }
    }
    vector<string> validStrings(int n) {
        int i = 0;
        string str = "01";
        string comp = "";
        compute(i, str, n, comp);
        return ans;
    }
};