class Solution {
public:
    string minRemoveToMakeValid(string s) {
      string str = "";
      vector<int>ind;
      for(int i = 0; i < s.size(); i++){
        if(str.size()>0 && s[i] == ')' && str.back() == '('){
            str.pop_back();
            ind.pop_back();
        }
        else if(s[i] == ')' || s[i] == '('){
            str += s[i];
            ind.push_back(i);
        }
      }
      if(ind.size() == 0) return s;
      str = "";
      int x = 0;
      for(int i = 0; i < s.size(); i++){
        if((x < ind.size()) && (i == ind[x])){
            x++;
        }
        else{
            str += s[i];
        }
      }
      return str;
    }
};