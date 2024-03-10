class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) 
    {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int sum = 0;
        for(auto a:apple)
        {
            sum += a;
        }
        int count = 0;
        int i = 0;
        while( i < capacity.size())
        {
            sum -= capacity[i];
            if(sum >= 0)
            {
                count += 1;
                i += 1;
                if(sum == 0)break;
            }
            else
            {
                count += 1;
                break;
            }
        }   
    return count;   
    }
};