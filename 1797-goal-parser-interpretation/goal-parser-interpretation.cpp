class Solution {
public:
    string interpret(string command) 
    {
        string ans = "";
        int i = 0;
        while(i < command.size())
        {
            if(command[i] == 'G') ans += 'G';
            if(command[i] == '(' and command[i+1] == ')') ans += 'o';
            if(command[i] == '(' and command[i+1] == 'a') ans += "al";
            else ans += "";
            i += 1;
        }
        return ans;
    }
};