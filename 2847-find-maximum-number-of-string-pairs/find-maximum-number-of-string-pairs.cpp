class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string, int>check;
        int count =0;
        for(int i = 0; i < words.size(); i++)
        {
            string dummy = words[i];
            reverse(dummy.begin(), dummy.end());
            if(check.find(dummy) != check.end()) count ++;
            check[words[i]] ++;
        }
        return count;
    }
};