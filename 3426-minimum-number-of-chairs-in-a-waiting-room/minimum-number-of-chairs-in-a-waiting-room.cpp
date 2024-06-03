class Solution {
public:
    int minimumChairs(string s) {
        int maxx = 0;
        int count = 0;
        for(int i = 0; i< s.size(); i++){
            if(s[i] == 'E') count += 1;
            else count -= 1;
            maxx = max(count, maxx);
        }
        return maxx;
    }
};