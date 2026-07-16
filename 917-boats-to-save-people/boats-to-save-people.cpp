class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans = 0;
        sort(people.begin(), people.end());
        int sum = 0;
        int i = 0, j = people.size()-1;
        while(i <= j) {
            if(people[i]+people[j] <= limit) {
                ans++;
                i++;
                j--;
            }else{
                ans++;
                j--;
            }
        }
        return ans;
    }
};