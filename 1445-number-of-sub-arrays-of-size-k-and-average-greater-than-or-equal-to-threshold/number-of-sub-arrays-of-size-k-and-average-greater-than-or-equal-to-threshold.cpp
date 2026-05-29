class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans = 0, sum = 0, i = 0;
        for(int j = 0; j < k; j++) {
            sum += arr[j];
        }
        for(int j = k; j < arr.size(); j++) {
            if(sum/k >= threshold) ans++;
            sum += arr[j];
            sum -= arr[i];
            i++;
        }
        if(sum/k >= threshold) ans++;
        return ans;
    }
};