class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char, char> mapS2T;
        unordered_map<char, char> mapT2S;
        
        for (int i = 0; i < s.size(); ++i) {
            char charS = s[i];
            char charT = t[i];
            
            // Check if there's a mapping for charS in mapS2T and if it maps to the same character in t
            if (mapS2T.find(charS) != mapS2T.end()) {
                if (mapS2T[charS] != charT) {
                    return false;
                }
            } else { // If no mapping exists, check if charT is already mapped to some other character in mapT2S
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