class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2){
        if(str2.size() < str1.size()) return false;
        for(int i = 0; i < str1.size(); i++){
            if(str1[i] != str2[i]) return false;
        }
        int x = str2.size()-str1.size();
        for(int i = 0; i < str1.size(); i++){
            if(str1[i] != str2[x]) return false;
            x++;
        }
        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0;
        if(words.size() == 1) return ans;
        for(int i = 0; i < words.size(); i++){
            for(int j = i+1; j < words.size(); j++){
                if(isPrefixAndSuffix(words[i], words[j])) ans++;
            }
        }
        return ans;
    }
};