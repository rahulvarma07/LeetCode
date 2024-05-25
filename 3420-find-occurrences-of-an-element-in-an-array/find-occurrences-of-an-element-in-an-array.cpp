class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
       unordered_map<int, int>ans;
       unordered_map<int, int>ord;
       vector<int>occ(queries.size(), -1);
       for(int i = 0; i < nums.size(); i++)
       {
          if(nums[i] == x)
          {
              ans[nums[i]] += 1;
              ord[ans[nums[i]]] = i;
          }
       }
       for(int i = 0; i < queries.size(); i++)
       {
          if(ord.find(queries[i]) != ord.end())
          {
               occ[i] = ord[queries[i]];
          }
       }
       return occ;
    }
};