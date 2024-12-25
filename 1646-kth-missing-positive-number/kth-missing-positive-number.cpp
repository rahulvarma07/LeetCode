class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0, right = arr.size()-1;
        while(left <= right){
            int mid = (left + right)/2;
            int check = arr[mid] - (mid+1);
            if(check < k) left = mid+1;
            else right = mid-1;
        }
        if(right < 0) return k;
        int toAdd = (k - (arr[right]-(right+1)));
        return arr[right]+toAdd;
    }
};