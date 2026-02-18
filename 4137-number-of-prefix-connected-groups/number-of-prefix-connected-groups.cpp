class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        int ans = 0;
        map<string, int> myMap;
        for(int i = 0; i < words.size(); i++){
            if(words[i].size() >= k){
                string str = "";
                for(int j = 0; j < k; j++){
                    str += words[i][j];
                }
                myMap[str]++;
            }
        }
        for(auto a: myMap){
            if(a.second > 1) ans++;
        }
        return ans;
    }
};