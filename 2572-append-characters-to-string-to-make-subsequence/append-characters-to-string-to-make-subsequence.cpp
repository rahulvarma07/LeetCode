class Solution {
public:
    int appendCharacters(string s, string t) {
        int ans = 0;
        int i = 0; // s
        int j = 0; // t
        while(i < s.size()){
            if(s[i] == t[j]){
                j += 1;
            }
            i += 1;
            cout << j << " " << i << " ";
        }
        ans = t.size() - j;
        return ans;
    }
};