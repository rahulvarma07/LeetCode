class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
       int sum = 0;
       int ans = 0;
       //for(int i = 1; i < arr.size() ; i++) arr[i] += arr[i-1];
       for(int i =0 ; i < arr.size() ; i ++)
       {
        for(int j = i; j < arr.size() ; j ++)
        {
            if(((j - i) + 1) % 2 != 0)
            {
                for(int x = i; x <= j ; x ++)
                {
                    sum += arr[x];
                }
            }
        }
        cout <<sum<<" ";
       }
       return sum;

    }
};