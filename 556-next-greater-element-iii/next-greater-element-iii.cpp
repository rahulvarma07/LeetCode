class Solution {
public:
    int nextGreaterElement(int n) {
        string str = to_string(n);
        int i = str.size()-2;
        
        for(; i >= 0; i--){
            bool isTrue = false;
            char ch = str[i];
            int ind = -1;
            for(int j = i+1; j < str.size(); j++){
                if(str[j] > str[i]){
                    if(str[j] < ch || !isTrue){
                        ch = str[j];
                        ind = j;
                    }
                    isTrue = true;
                }
            }

            if(isTrue){
                swap(str[i], str[ind]);
                sort(str.begin()+i+1, str.end());
                try{
                    int ans = stoi(str);
                    return ans;
                }catch(...){
                    return -1;
                }
            }

        }
        return -1;
    }
};