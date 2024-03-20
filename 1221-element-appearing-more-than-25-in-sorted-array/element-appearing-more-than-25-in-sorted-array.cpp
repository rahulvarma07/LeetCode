class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
       int check = arr.size()/4;
       int anss = 0;
       unordered_map<int,int>ans;
       for(auto a:arr)
       {
        ans[a] ++;
       } 
       for(auto a:ans)
       {
        if(a.second > check) anss = a.first;
       }
       return anss;
    }
};