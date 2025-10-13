class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        vector<string> temp = words;
        for(int i = 0; i < temp.size(); i++){
            sort(temp[i].begin(), temp[i].end());
        }
        ans.push_back(words[0]);
        for(int i = 1; i < words.size(); i++){
            if(temp[i] != temp[i-1]){
                ans.push_back(words[i]);
            } 
        }
        return ans;
    }
};