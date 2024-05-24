class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans(gain.size()+1, 0);
        for(int i = 1; i < gain.size(); i++)
        {
            gain[i] += gain[i-1];
        }
        for(int i = 1; i < ans.size(); i++)
        {
            ans[i] = gain[i-1];
        }
        for(auto a: ans) cout << a << " ";
        int maxx = ans[ans.size() - 1];
        for(int i = ans.size() - 2; i >= 0; i--)
        {
            maxx = max(maxx, ans[i]);
        }
        return maxx;
    }
};