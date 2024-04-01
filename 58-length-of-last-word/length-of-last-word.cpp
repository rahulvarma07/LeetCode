class Solution {
public:
    int lengthOfLastWord(string s) 
    {
      int count = 0 ;
      int right = s.size()-1;
      while(right >= 0)
      {
        if(s[right] != ' ') break;
        if(s[right] == ' ') right -= 1;
      }
      for(int i = right; i > -1; i --)
      {
        if(s[i] == ' ') break;
        count += 1;
      } 
      return count;      
    }
};