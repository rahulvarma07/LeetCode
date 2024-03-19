class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string>ans;
        // ans.push_back("1");
        for(int i = 1; i <= n; i ++)
        {
            string a = to_string(i);
            if(i % 3 == 0 and i % 5 == 0) ans.push_back("FizzBuzz");
            else if(i % 3 == 0) ans.push_back("Fizz");
            else if(i % 5 == 0) ans.push_back("Buzz");
            else ans.push_back(a);
        }
        return ans;
    }
};