class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans = 0, sum = 0, i = 0;
        for(int j = 0; j < k; j++) {
            sum += arr[j];
        }
        if(sum/k >= threshold) ans++;
        for(int j = k; j < arr.size(); j++) {
            sum += arr[j];
            sum -= arr[i];
            i++;
            if(sum/k >= threshold) ans++;
        }
        return ans;
    }
};