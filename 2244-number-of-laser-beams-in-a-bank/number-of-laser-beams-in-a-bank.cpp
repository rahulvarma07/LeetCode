class Solution {
public:
    int numberOfBeams(vector<string>& bank){
    vector<int>numbers;
    int count; 
        for(int i=0;i<bank.size();i++)
        {
            count = 0;
            for(char j:bank[i])
            {
                if (j == '1') count += 1;
            }
            if (count>0)numbers.push_back(count); 
        }
        int sum = 0;
        if (numbers.size()>1)
        {
            int i = 0;
            int j = 1;
            while(j<numbers.size())
            {
                sum += numbers[i]*numbers[j];
                i += 1;
                j += 1;
            }
        }
        else sum = 0;
    return sum;
    }
};
