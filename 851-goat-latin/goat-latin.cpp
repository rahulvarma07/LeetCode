class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;
        return false;
    }
    string toGoatLatin(string sentence) {
        string ans = "", str = "";
        sentence += ' ';
        int cnt = 1;
        for(int i = 0; i < sentence.size(); i++){
            if(sentence[i] == ' '){
                if(str.size() > 0){
                    if(isVowel(str[0])){
                        ans += str;
                    }
                    else{
                        reverse(str.begin(), str.end());
                        char ch = str.back();
                        str.pop_back();
                        reverse(str.begin(), str.end());
                        ans += str;
                        ans += ch;
                    }
                    ans += "ma";
                    for(int j = 1; j <= cnt; j++) ans += 'a';
                    cnt++;
                    if(i != sentence.size()-1) ans += ' ';
                }
                str = "";
            }
            else{
                str += sentence[i];
            }
        }
        return ans;
    }
};