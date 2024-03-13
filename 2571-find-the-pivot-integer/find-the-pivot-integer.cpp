class Solution {
public:
    int pivotInteger(int n) 
    {
        vector<int>check,suf;
        for(int i = 0; i < n; i++)
        {
            check.push_back(i+1);
        }
        suf = check;
        for(int i = 1; i < n;i++)
        {
            check[i] += check[i-1];
        }
        for(auto a:check)
        {
            cout<<a<<" ";
        }
        cout<<endl;
        for(int i = n-2; i >= 0; i --)
        {
            suf[i] += suf[i+1];
        }  
        for(auto a:suf)
        {
            cout<<a<<" ";
        }
        int i = n-1;
        int j = n-1;
        while(i >= 0 and j >= 0)
        {
            if(check[i] == suf[j]) return i+1;
            else
            {
                i -= 1;
                j -= 1;
            }
        } 
        return -1;              
    }
};