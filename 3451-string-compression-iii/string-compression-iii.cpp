class Solution {
public:
    string compressedString(string word) {
      string ans = "";
      int i = 0;
      while(i < word.size())
      {
        int j = i;
        char add = word[i];
        int cnt = 0;
        while(word[i] == word[j])
        {
            if(cnt >= 9)
            {
                ans += '9';
                ans += add;
                cnt = 0;
            }
            cnt ++;
            i ++;
        }
        ans += to_string(cnt);
        ans += add;
      } 
      return ans;
    }
};