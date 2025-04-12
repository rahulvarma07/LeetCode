class Solution {
public:
    int maxCons(string str, char ch, int k){
        int ans = 0, i = 0, j = 0, cnt = 0;
        while(j < str.size()){
            if(str[j] != ch) cnt++;
            while(cnt > k){
                if(str[i] != ch) cnt--;
                i++;
            }
            ans = max(ans, (j-i)+1);
            j++;
        }
        return ans;
    }
    int characterReplacement(string s, int k) {
        string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int ans = 0;
        for(auto a:str){
            ans = max(ans, maxCons(s, a, k));
        }
        return ans;
    }
};