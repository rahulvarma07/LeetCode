class Solution {
public:
    int maximumGain(string s, int x, int y) {
        string str = "";
        if(x < y) str = "ba";
        else str = "ab";
        int maxx = 0;
        string s1 = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != str[1]){
                s1 += s[i];
            }
            else if(s[i] == str[1]){
                if(((s1.size() > 0) && (s1.back() != str[0])) || (s1.size() == 0)){
                    s1 += s[i];
                }
                else{
                    if(s1.size() > 0 && s1.back() == str[0]){
                        maxx += max(x, y);
                        s1.pop_back();
                    }
                }
            }
        }
        
        swap(str[0], str[1]);
        string minstr = "";
         for(int i = 0; i < s1.size(); i++){
             if(s1[i] != str[1]){
                minstr += s1[i];
             }
             else if(s1[i] == str[1]){
                if(((minstr.size() > 0) && minstr.back() != str[0]) ||(minstr.size() == 0)) {
                    minstr += s1[i];
                }
                else{
                    if(minstr.size() > 0 && minstr.back() == str[0]){
                        maxx += min(x, y);
                        minstr.pop_back();
                    }
                }
             }
         }
        return maxx;

    }
};