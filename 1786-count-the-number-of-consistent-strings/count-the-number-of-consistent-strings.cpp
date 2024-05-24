class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
       unordered_map<char, int>check;
       for(auto a: allowed) check[a] ++;
       int count = words.size();
       for(int i = 0; i < words.size(); i++)
       {
        for(int j = 0; j < words[i].size(); j++)
        {
            if(check.find(words[i][j]) == check.end())
            {
                count -= 1;
                break;
            }
        }
       } 
       return count;
    }
};