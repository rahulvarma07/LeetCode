class Solution {
public:
    int appendCharacters(string s, string t) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        int i = 0; 
        int j = 0;
        while(i < s.size()){
            if(s[i] == t[j]){
                j += 1;
            }
            i += 1;
            cout << j << " " << i << " ";
        }
        return t.size() - j;
    }
};