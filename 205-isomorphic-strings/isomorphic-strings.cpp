class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapS2T;
        unordered_map<char, char> mapT2S; 
        for (int i = 0; i < s.size(); ++i) {
            char charS = s[i];
            char charT = t[i];
            if (mapS2T.find(charS) != mapS2T.end()) {
                if (mapS2T[charS] != charT) {
                    return false;
                }
            } 
            else { 
                if (mapT2S.find(charT) != mapT2S.end()) {
                    return false;
                }
                mapS2T[charS] = charT;
                mapT2S[charT] = charS;
            }
        }
        return true;
    }
};