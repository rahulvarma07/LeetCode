class Solution {
public:
    long long minimumSteps(string s) {
        long long int ans = 0;
        int i = 0, j = 0;
        while(s[j] == '0' && j < s.size()){
            j++;
        }
        i = j;
        for( j;j < s.size(); j++){
            if(s[j] == '0'){
                ans += (j-i);
                swap(s[j], s[i]);
                i++;
            }
        }
        cout << s << endl;
        return ans;
    }
};