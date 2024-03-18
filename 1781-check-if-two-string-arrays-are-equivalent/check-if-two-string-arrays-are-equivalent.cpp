class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string sum1 = "";
        string sum2 = "";
        for(auto a:word1)
        {
            sum1 += a;
        }
        for(auto a:word2)
        {
            sum2 += a;
        }
        if(sum1 == sum2)return true;
        return false;
    }
};