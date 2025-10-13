class Solution {
public:
    bool scoreBalance(string s) {
        for(int i = 0; i < s.size()-1; i++){
            int sc1 = 0, sc2 = 0;
            for(int j = i+1; j < s.size(); j++){
                sc1 += (s[j]-'a')+1;
            }
            for(int k = 0; k <= i; k++){
                sc2 += (s[k]-'a')+1;
            }

            cout << sc1 << " " << sc2 << endl;
            if(sc1 == sc2) return true;
        }
        return false;
    }
};