class Solution {
string str ="abcdefghijklmnopqrstuvwxyz";
public:
    char shiftChar(char c, int s){
        if(s == 0) return c;
        s %= 26;
        int sh = ((c-'a'+s)+26)%26;
        return 'a'+sh;
    }
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = shifts.size();
        vector<int>check(s.size(), 0);
        for(int i = 0; i < n; i++){
            int x = shifts[i][0], y = shifts[i][1], d = shifts[i][2];
            if(d == 0){
                check[x] -= 1;
                if((y+1 < s.size())){
                    check[y+1] += 1;
                }
            }
            else if(d == 1){
                check[x] += 1;
                if((y+1 < check.size())){
                    check[y+1] -= 1;
                }
            }
        }
        long long int sum = 0;
        string ans = "";
        cout << shiftChar('b', 1);
        for(int i = 0; i < check.size(); i++){
            sum += check[i];
            ans += shiftChar(s[i], sum);
        }
        return ans;
    }
};