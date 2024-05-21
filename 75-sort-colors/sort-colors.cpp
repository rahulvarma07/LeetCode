class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        /*
        Most Optimal Solution ## Dutch Flag Algorithm ##
        // Example [2, 0 , 2, 1, 1, 0]
        // take three pointer's low mid and high
        // place low and mid at 0th index 
        // place high at n-1 th index
        */
        /*
        the array should be like [0 to low , low to mid , mid to n - 1]
                                 // 0 //      // 1 //      // 2 //
        */
        int low = 0, mid = 0;
        int high = nums.size() - 1;
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[mid], nums[low]); // When 0 swap with low 
                low += 1;
                mid += 1;
            }
            else if(nums[mid] == 1)
            {
                mid += 1; // when one don't swap but increment the value of mid
            }
            else 
            {
                swap(nums[mid], nums[high]);
                high -= 1; // swap with high when 2
            }
        }
    }
};