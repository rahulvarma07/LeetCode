class Solution {
public:
    void helper(int low, int mid, int high, vector<int> &arr){
        int left = low, right = mid+1;
        vector<int> temp;
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i = high; i >= low; i--){
            arr[i] = temp.back();
            temp.pop_back();
        }
    }
    void mergeSort(int left, int right, vector<int>&arr){
        if(left == right) return;
        int mid = (left + right)/2;
        mergeSort(left, mid, arr);
        mergeSort(mid+1, right, arr);
        helper(left, mid, right, arr);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(0, nums.size()-1, nums);
        return nums;
    }
};