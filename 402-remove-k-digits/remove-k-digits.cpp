class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> mSt;
        for(auto a: num) {
            while(!mSt.empty() && (k && mSt.top() > a)) {
                k--;
                mSt.pop();
            }
            mSt.push(a);
        }
        while(k-- && !mSt.empty()) {
            mSt.pop();
        }
        string str = "";
        while(!mSt.empty()) {
            str += mSt.top();
            mSt.pop();
        }
        while(str.size() > 0 && str.back() == '0') str.pop_back();
        reverse(str.begin(), str.end());
        return (str.size() == 0 ? "0" : str);
    }
};