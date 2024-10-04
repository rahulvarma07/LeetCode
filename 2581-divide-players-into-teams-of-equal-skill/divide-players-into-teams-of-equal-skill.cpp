class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long int ans = 0;
        sort(skill.begin(), skill.end());
        int i = 0, j = skill.size()-1;
        int prevSum = skill[i]+skill[j];
        ans  = skill[i]*skill[j];
        i++, j--;
        while(i < j){
            int sum = skill[i]+skill[j];
            if(prevSum != sum) return -1;
            ans += skill[i]*skill[j];
            i++;
            j--;
        }
        return ans;
    }
};