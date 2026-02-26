class Solution {
public:
    int numSteps(string s) {
     // 1101
     // 1110
     // 0111
     // 1000
     // 0100
     // 0010
     // 0001

     vector<char> bin(501, '0');
     for(int i = bin.size()-1; i >= 0; i--){
        bin[i] = s.back();
        s.pop_back();
        if(s.size() == 0) break;
     }
     int ans = 0, n = 500;
     while(true){
        int oneCount = 0;
        for(auto a: bin){
            if(a == '1') oneCount++;
        }
        if(oneCount == 1 && bin[500] == '1') return ans;
        if(bin[500] == '1'){
            for(int i = n; i >= 0; i--){
                if(bin[i] == '0'){
                    bin[i] = '1';
                    break;
                }else{
                    bin[i] = '0';
                }
            }
            ans++;
        }else{
            bin.pop_back();
            reverse(bin.begin(), bin.end());
            bin.push_back('0');
            reverse(bin.begin(), bin.end());
            ans++;
        }
     }
     return ans;
    }
};