class Solution {
public:
    int maxOperations(string s) {
      int oneCount = 0, finalAns = 0;
      for(int i = 0; i < s.size(); i++) {
        if(i != 0 && s[i-1] == '0' && s[i] == '0') {
            continue;
        } else if(s[i] == '0' ) {
            finalAns += oneCount;
        } else {
            oneCount += 1;
        }
      } 
      return finalAns; 
    }
};