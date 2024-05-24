class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string, int>mymap;
        unordered_map<char, string> ans = {
{'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."}, 
{'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, 
{'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, 
{'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"}, 
{'w', ".--"}, {'x', "-..-"}, {'y', "-.--"}, {'z', "--.."}};
    for(int i = 0; i < words.size(); i++)
    {
        string s = "";
        for(int j = 0; j < words[i].size(); j++)
        {
            s += ans[words[i][j]];
        }
        mymap[s] += 1;
    }
    return mymap.size();
    return 1;
    }

};