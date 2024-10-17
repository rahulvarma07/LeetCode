class Solution {
public:
    int maximumSwap(int num) {
        if(num <= 10) return num;
        string str = to_string(num);
        bool check = true;
        for(int i = 0; i < str.size() && check; i++){
            int maxx = str[i]-'0';
            int ind = -1;
            for(int j = i+1; j < str.size(); j++){
                if(maxx <= (str[j]-'0')){
                    maxx = max(maxx, (str[j]-'0'));
                    ind = j;
                }
            }
            if(ind != -1 && maxx > (str[i]-'0')){
                swap(str[i], str[ind]);
                check = false;
                break;
            }
        }
        return stoi(str);
    }
};