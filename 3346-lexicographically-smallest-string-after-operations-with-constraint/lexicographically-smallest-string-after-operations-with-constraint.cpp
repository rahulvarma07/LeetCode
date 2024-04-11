class Solution {
public:
    string getSmallestString(string s, int k) 
    {
        // Writing NOTES so i can remember.
        // 1. to calculate the min distance as it is in cyclic order
        // 2. z is connected again to a
        // EVERYTIME OPERATION IS DONE "K" will decriment by the # distance
        string ans = "";
        for(int i = 0; i < s.size(); i += 1) // lop over all characters
        {
            int minn = min((s[i] - 'a'), ('z' - s[i]) + 1); // min from both reverse and front direction
            if(minn <= k) // check whether min is less than k or not;
            {
                k -= minn; // decrement the k value
                ans += 'a'; 
            }
            else
            {
                char c = s[i] - k; 
                ans += c;
                k = 0;
            }
        }
    return ans;  
    }
};