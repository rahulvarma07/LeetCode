class Solution {
public:
    int countAsterisks(string s) {
      int count = 0;
      int ans = 0;
      for(int i = 0; i < s.size(); i++)
      {
         if(s[i] == '*' and count == 0) ans += 1;

         else if(s[i] == '|' and count == 0) count += 1;
         else if(s[i] == '|' and count == 1) count -= 1;

         //if(s[i] == '*' and count == 0) ans += 1;
      }  
      return ans;
    }
};