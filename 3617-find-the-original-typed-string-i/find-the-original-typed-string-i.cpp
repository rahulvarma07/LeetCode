class Solution {
public:
    int possibleStringCount(string word) {
        string str = "";
        int ans  = 0;
        str += word[0];
        for(int i = 1; i < word.size(); i++){
            if(word[i] == str.back()){
                ans ++;
            }
            else{
                str += word[i];
            }
        }
        return ans+1;
    }
};