class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        unordered_map<char, int>check1;
        unordered_map<char, int>check2;
        for(auto a:s1) check1[a]++;
        int n = s1.size();
        int i = 0, j;
        for(j = 0; j < n; j++){
            check2[s2[j]]++;
        }
        while(j < s2.size()){
            bool istrue = true;
            for(auto a: check2){
                if(check2[a.first] != check1[a.first]) istrue = false;
            }
            if(istrue) return true;
            check2[s2[i]] -= 1;
            if(check2[s2[i]] <= 0)check2.erase(s2[i]);
            i++;
            check2[s2[j]] += 1;
            j++;
            cout << check2.size() << " ";
        }
        bool istrue = true;
        for(auto a: check2){
            if(check2[a.first] != check1[a.first]) istrue = false;
        }
        return istrue;
    }
};