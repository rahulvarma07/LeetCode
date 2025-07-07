class Solution {
public:
    bool check(string str){
        if(str == "electronics" || str == "grocery" || str == "pharmacy" || 
        str == "restaurant") return true;
        return false;
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<bool>isValid(code.size(), 1);
        for(int i = 0; i < code.size(); i++){
            bool isTrue = code[i].size() != 0;
            for(char b:code[i]){
                if(isalpha(b) || isdigit(b) || b == '_') continue;
                isTrue = false;
            }
            isValid[i] = isTrue;
        }
        vector<string>ans;
        map<string, vector<string>>MyMap;
        for(int i = 0; i < isValid.size(); i++){
            if(isValid[i] && check(businessLine[i]) && isActive[i]){
                MyMap[businessLine[i]].push_back(code[i]);
            }
        }
        sort(businessLine.begin(), businessLine.end());
        for(int i = 0; i < businessLine.size(); i++){
            if(i != 0 && businessLine[i] == businessLine[i-1]) continue;
            sort(MyMap[businessLine[i]].begin(), MyMap[businessLine[i]].end());
            for(auto a: MyMap[businessLine[i]]){
                ans.push_back(a);
            }
            cout <<endl;
        }
        return ans;
    }
};