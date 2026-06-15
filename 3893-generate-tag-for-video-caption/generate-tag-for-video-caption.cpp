class Solution {
public:
    string generateTag(string caption) {
        string ans = "";
        ans += '#';
        int i = 0;
        while(caption[i] == ' ') i++;
        bool isStart = true;
        for(    ; i < caption.size(); i++) {
            if(ans.size() == 100) return ans;
            if(i == 0 || isStart) {
            isStart = false;
                if(caption[i] >= 'A' && caption[i] <= 'Z') {
                    ans += 'a' + caption[i]-'A';
                }else{
                    ans += caption[i];
                }
            }
            else if(caption[i-1] == ' ' && caption[i] != ' ') {
                if(caption[i] >= 'a' && caption[i] <= 'z') {
                    ans += 'A' + caption[i]-'a';
                }else {
                    ans += caption[i];
                }
            }else if(caption[i] != ' ') {
                if(caption[i] >= 'A' && caption[i] <= 'Z') {
                    ans += 'a' + caption[i]-'A';
                }else{
                    ans += caption[i];
                }
            }
        }
        return ans;
    }
};