class Solution {
public:
    bool isValid(string &s) {
        int cnt = 0;
        for(auto a: s) {
            if(a == '(') cnt++;
            else if(a == ')') cnt--;
            if(cnt < 0) return false;
        }
        return (cnt == 0);
    }
    void subSet(set<string> &ans, string &str, int ind, int &minn, string &s) {
        if(ind == str.size()) {
            if(s.size() == str.size()-minn) {
                if(isValid(s)) {
                    ans.insert(s);
                }
            }
            return;
        }
        if(str[ind] != '(' && str[ind] != ')') {
            s += str[ind];
            subSet(ans, str, ind+1, minn, s);
            s.pop_back();
        }else {
            s += str[ind];
            subSet(ans, str, ind+1, minn, s);
            s.pop_back();
            subSet(ans, str, ind+1, minn, s);
        }
    }
    int getMin(string &s, vector<int> &pos) {
        stack<char> st;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                pos.push_back(i);
                st.push('(');
            }else if(s[i] == ')') {
                pos.push_back(i);
                if(!st.empty()) st.pop();
                else cnt++;
            }
        }
        return st.size() + cnt;
    }
    vector<string> removeInvalidParentheses(string s) {
        vector<int> pos;
        int minLen = getMin(s, pos);
        set<string> ans;
        string str;
        subSet(ans, s, 0, minLen, str);
        vector<string> finalAns;
        for(auto &a: ans) finalAns.push_back(a);
        return finalAns;
        // find the minimum removal first 

        // generate all possible subsets which are valid and have minimum remove 
    }
};