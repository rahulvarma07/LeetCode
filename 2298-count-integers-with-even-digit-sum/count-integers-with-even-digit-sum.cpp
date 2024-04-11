class Solution {
public:
    int countEven(int num) 
    {
        int sum = 0;
        for(int i = 1 ; i <= num; i ++)
        {
            int n = i;
            int check = 0;
            while(n > 0)
            {
                int rem = n % 10;
                check += rem;
                n = n / 10;
            }
            if(check % 2 == 0)
            {
                sum += 1;
            }
        }
        return sum;
    }
};