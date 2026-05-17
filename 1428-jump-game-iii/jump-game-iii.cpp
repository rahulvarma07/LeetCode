bool isTrue = false;
class Solution {
public:
    bool letsGo(vector<int> &arr, int i, vector<bool> & vis) {
        if(i >= arr.size() || i < 0 || vis[i]) return false;
        if(arr[i] == 0) {
            return true;
        }
        vis[i] = true;
        return letsGo(arr, i - arr[i], vis)  || letsGo(arr, i + arr[i], vis);
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool> isVisited(arr.size(), false); 
        return letsGo(arr, start, isVisited);
    }
};