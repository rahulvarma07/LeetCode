class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr)
    {
            int left = 0;
            int right = arr.size()-1;
            int mid = 0;
            while(left <= right)
            {
                mid = (left - ((left - right)/2));
                if(mid>0 and arr[mid] > arr[mid-1] and mid<arr.size()-1 and arr[mid] > arr[mid+1])
                {
                    return mid;
                }
                if(mid >0 and arr[mid] > arr[mid-1] or mid<arr.size()-1 and  arr[mid] < arr[mid+1]) left = mid+1;
                else right = mid-1;
            }
        return arr.size()-1; 
    }
};

