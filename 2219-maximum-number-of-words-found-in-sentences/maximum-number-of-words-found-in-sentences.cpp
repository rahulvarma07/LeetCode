class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;
        int maxx = 0;
        for(int i = 0; i < sentences.size(); i++)
        {
            count = 0;
            for(int j = 0; j < sentences[i].size(); j++)
            {
                if(sentences[i][j] == ' ') count += 1;
            }
            count += 1;
            maxx = max(maxx, count);
        }
        return maxx;
    }
};