class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        long   s = 0;
        vector<int>tf;
        for(int i=1;i<=9;i++)
        {
            s=0;
            for(int j=i;j<=9;j++)
            {
                s = (s*10)+j;
                if (s >=low and s <= high) {
                tf.push_back(s);
              }
            }
        }
    sort(tf.begin(),tf.end());
    return tf;    
    }
};