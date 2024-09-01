class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
      vector<vector<int>>ans;
      if(m*n != original.size()) return ans;
      for(int i = 0; i < original.size(); i+=n){
        cout << i << " ";
        vector<int>p;
        for(int j = i; j < i+n; j++){
            p.push_back(original[j]);
        }
        ans.push_back(p);
      }  
      return ans;
    }
};