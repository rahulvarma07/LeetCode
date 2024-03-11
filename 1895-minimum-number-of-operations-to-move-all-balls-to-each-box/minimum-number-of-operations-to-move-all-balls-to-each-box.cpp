class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        vector<int>ind;
        vector<int>ans;
        for(int i=0;i<boxes.size();i++)
        {
            if(boxes[i] == '1') ind.push_back(i);
        }
        int sum = 0;
        for(int i = 0; i < boxes.size(); i++)
        {
            sum = 0;
            for(auto a:ind)
            {
                sum += abs(i - a);
            }
            ans.push_back(sum);
        }
        return ans;
    }
};