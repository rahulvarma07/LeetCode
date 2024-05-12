class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*
        1. Take three variables to maintain the count.
        2. Count 0 , 1, and 2
        3. Rearrange the array according to the count.
        4. Optimal compared to sorting : Nlogn
        5. Time complexity 2n.
        */
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < nums.size(); i ++)
        {
            if(nums[i] == 0)
            {
                count0 ++;
            }
            else if(nums[i] == 1) count1 ++;
            else count2 ++;
        }// n
    for(int i = 0; i < count0 ; i ++)
    {
        nums[i] = 0;
    }
    for(int i = count0; i < count1+count0; i ++)
    {
        nums[i] = 1;
    }
    for(int i = count1+count0 ; i < nums.size(); i ++)
    {
        nums[i] = 2;
    }//n

    }
};