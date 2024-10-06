class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        if(s1 == s2) return true;
        if(s1.size() == s2.size() && s1 != s2) return false;
        string str1, str2;
        if(s1.size() > s2.size()){
            str2 = s1;
            str1 = s2;
        }
        else{
            str2 = s2;
            str1 = s1;
        }
        str1 += ' ';
        str2 += ' ';
        vector<string>check1;
        vector<string>check2;
        string str = "";
        for(auto a: str2){
            if(a == ' '){
                check1.push_back(str);
                str = "";
                continue;
            }
            str += a;
        }
        str = "";
        for(auto a: str1){
            if(a == ' '){
                check2.push_back(str);
                str = "";
                continue;
            }
            str += a;
        }
        for(auto a: check1) cout << a << " ";
        cout << endl;
        for(auto a: check2) cout << a << " ";
        int start = 0, end = check2.size()-1,strt = 0, end1 = check1.size()-1;
        while(start <= end){
            if(check1[strt] == check2[start]){
                strt++;
                start++;
            }
            else break;
        }
        while(end >= start){
            if(check1[end1] == check2[end]){
                end --;
                end1 --;
            }
            else break;
        }
        if(end < start) return true;
        return false;
    }
};