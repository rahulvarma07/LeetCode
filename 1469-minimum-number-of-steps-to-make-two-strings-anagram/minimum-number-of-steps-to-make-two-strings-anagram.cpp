class Solution {
public:
    int minSteps(string s, string t)
    {
        unordered_map<char,int>mymap1;
        unordered_map<char,int>mymap2;
        int count = 0;
        for(auto a:s)
        {
            mymap1[a] += 1;
        }    
        for(auto a:t)
        {
            mymap2[a] += 1;
        }
        for(auto i:mymap1)
        {
            if(mymap2[i.first] < i.second)count += (i.second - mymap2[i.first]);
        }
        return count;
    }
};