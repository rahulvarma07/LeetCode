class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string>res(numRows, "");
        int curr = 0;
        int i = 0;
        while(i < s.size()){
            while(curr < numRows && i < s.size()){
                res[curr] += s[i];
                curr++;
                i++;
            }
            curr--;
            while(curr > 0 && i < s.size()){
                curr--;
                res[curr] += s[i];
                i++;
            }
            curr++;
        }
        string ans = "";
        for(auto a:res){
            for(auto b:a) ans += b;
            cout << endl;
        }
        return ans;
    }
};