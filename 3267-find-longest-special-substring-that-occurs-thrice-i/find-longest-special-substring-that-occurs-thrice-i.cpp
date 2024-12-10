class Solution {
public:
    int maximumLength(string s) {
        int ans = -1;
        for(int i = 0; i < s.size(); i++){
            string str = "";
            str += s[i];
            for(int j = i; j < s.size() && s[j] == str.back(); j++){
                if(j != i){
                    str += s[i];
                }
                int count = 0;
                for(int k = i; k < s.size()-str.size()+1; k++){
                int l = k, r = k+str.size()-1;
                int x = 0, y = str.size()-1;
                bool istrue = true;
                while(l <= r && x <= y){
                    if(s[l] != str[x] || s[r] != str[y]){
                        istrue = false;
                        break;
                    }
                    l++;
                    x++;
                    r--;
                    y--;
                }
                if(istrue){
                    count++;
                }
                if(count == 3){
                    int x = str.size();
                    ans = max(ans, x);
                    cout << x << endl;
                    break;
                }
             }
            }
        }
        return ans;
    }
};