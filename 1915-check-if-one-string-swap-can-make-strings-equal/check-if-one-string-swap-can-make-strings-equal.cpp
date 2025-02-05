class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        int cnt = 0;
        int x = -1, y = -1;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                if(x == -1) x = i;
                else y = i;
            }
        }
        if(x == -1 || y == -1) return false;
        swap(s2[x], s2[y]);
        return (s1 == s2);
    }
};