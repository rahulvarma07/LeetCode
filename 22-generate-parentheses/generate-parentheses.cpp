class Solution {
public:
    vector<string>ans;
    void compute(int ind, int size, string str, string &check){
        // Checking
        if(ind == size){
            int cnt = 0, flag = 1;
            for(int i = 0; i < str.size(); i++){
                if(str[i] == '(') cnt++;
                else if(str[i] == ')') cnt--;
                if(cnt < 0){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1 && cnt == 0) ans.push_back(str);
            return;
        }
        for(int i = 0; i < check.size(); i++){
            str += check[i];
            compute(ind+1, size, str, check);
            str.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string str = "", check = "()";
        int ind = 0;
        compute(ind, n*2, str, check);
        return ans; 
    }
};