class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        unordered_map<char,int>ans;
        for(auto a:sentence)
        {
            ans[a] += 1;
        }
        if(ans.size() == 26)return true;
        return false;  
    }
};