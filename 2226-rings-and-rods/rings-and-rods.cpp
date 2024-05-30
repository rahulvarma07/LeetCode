class Solution {
public:
    int countPoints(string rings) 
    {
       unordered_map<int, set<char>>ans;
       for(int i = 1; i < rings.size(); i+= 2)
       {
        int n = rings[i] - '0';
        ans[n].insert(rings[i-1]);
       }
       int count = 0;
       int ret = 0;
       for(auto a:ans)
       {
        count = 0;
         for(auto b:a.second)
         {
            if(b == 'B' or b == 'G' or b == 'R') count += 1;
         }
         if(count == 3) ret += 1;
       }
       return ret;
    }
};