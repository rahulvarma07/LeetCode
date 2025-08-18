#define ll long long int
class Solution {
public:
    int mod = 1e9+7;

    vector<int> nextSmallElem(vector<int> &arr){
        stack<int> monotonic;
        int n = arr.size();
        vector<int> ans(n, n);
        monotonic.push(n-1);
        for(int i = n-2; i >= 0; i--){
            while(monotonic.size() > 0 && arr[monotonic.top()] >= arr[i]){
                monotonic.pop();
            }
            if(monotonic.size() > 0){
                ans[i] = monotonic.top();
            }
            monotonic.push(i);
        }
        return ans;
    }

    vector<int> prevSmallElem(vector<int> &arr){
        stack<int> monotonic;
        int n = arr.size();
        vector<int> ans(n, -1);
        monotonic.push(0);
        for(int i = 1; i < n; i++){
            while(monotonic.size() > 0 && arr[monotonic.top()] > arr[i]){
                monotonic.pop();
            }
            if(monotonic.size() > 0){
                ans[i] = monotonic.top();
            }
            monotonic.push(i);
        }
        return ans;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse = prevSmallElem(arr);
        vector<int> nse = nextSmallElem(arr);
        ll ans = 0;
        for(int i = 0; i < n; i++){
            int l = i - pse[i];
            int r = nse[i] - i;
            ans = (ans + (1ll * (arr[i]) * ((l*r)%mod))) % mod;  
        }
        return ans;
    }
};