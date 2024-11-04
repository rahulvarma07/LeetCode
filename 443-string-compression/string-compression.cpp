class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>ans;
        int cnt = 0;
        char ch = chars[0];
        for(int i = 0; i < chars.size(); i++){
            if(chars[i] == ch){
                cnt++;
            }
            else if(chars[i] != ch){
                ans.push_back(ch);
                if(cnt != 1){
                    string str = to_string(cnt);
                    for(int x = 0; x < str.size(); x++){
                    ans.push_back(str[x]);
                    }
                }
                ch = chars[i];
                cnt = 1;
            }
        }
        ans.push_back(ch);
        if(cnt != 1){
            string str = to_string(cnt);
            for(int x = 0; x < str.size(); x++){
            ans.push_back(str[x]);
            }
        }
        chars = ans;
        return ans.size();
    }
};