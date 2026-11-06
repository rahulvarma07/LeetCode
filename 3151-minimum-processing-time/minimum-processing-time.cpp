class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        // {8, 10} 

        // {2, 2, 3, 1, 8, 7, 4, 5}
        sort(tasks.begin(), tasks.end(), greater<int>());
        sort(processorTime.begin(), processorTime.end());
        int ans = 0;
        for(int i = 0; i < processorTime.size(); i++) {
            int m = 0;
            for(int j = 4*i; j < 4*i+4 && j < tasks.size(); j++) {
                //cout << tasks[j] << " ";
                m = max(m, (processorTime[i] + tasks[j]));
            }
            ans = max(ans,m);
        }
        return ans;
    }
};