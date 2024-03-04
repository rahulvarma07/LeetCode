class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) 
    {
        sort(tokens.begin(),tokens.end());
        if(tokens.size() == 1)
        {
            if(power > tokens[0])return 1;
            else return 0;
        }
        // if(power < tokens[0])return 0;
        // two pointers
        int i = 0; // pointer 1
        int j = tokens.size()-1; // pointer 2
        int count = 0;
        while(i <= j)
        {
            if(power >= tokens[i])
            {
                power -= tokens[i];
                count += 1;
                i += 1;
            }
            else if(count > 0)
            {
                if(i == j)break; // checking after i == j;
                else
                {
                    if(power < tokens[i])
                    {
                        count -= 1;
                        power += tokens[j];
                        j -= 1;
                    }
                }

            }
            else
            {
                break;
            }
        }
    return count;   
    }
};