class Solution {
public:
    string customSortString(string order, string s) 
    {
        map<char,int>ans;
        string anss = "";
        for(auto a:s)
        {
            ans[a] ++;
        }
        for(auto a:order)
        {
            if(ans.find(a) != ans.end())
            {
                auto temp = ans.find(a);
                int count = temp->second;
                string str(count,a);
                anss += str;
                ans.erase(a);
            }
        }   
        for(auto a:ans)
        {
            string s1(a.second,a.first);
            anss += s1;
        } 
        return anss;      
    }
};