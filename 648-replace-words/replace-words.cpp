class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string, int>ans;

        for(auto a:dictionary){
            ans[a] += 1;
        }

        int i = 0;
        string s = "";
        string s1 = "";

        while(i < sentence.size()){
            s += sentence[i];
            if(sentence[i] == ' '){
                s1 += s;
                s = "";
            }
            i += 1;
            if(ans.find(s) != ans.end()){
                s1 += s;
                while(sentence[i] >= 'a' and sentence[i] <= 'z'){
                    i ++;
                }
                s ="";
            }
        }
        s1 += s;
        return s1;
    }
};