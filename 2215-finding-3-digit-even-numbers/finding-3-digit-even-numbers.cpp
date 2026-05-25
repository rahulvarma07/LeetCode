class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int, int> myMap;
        unordered_map<int, int> myMapTwo;
        for(auto a: digits) {
            myMap[a]++;
            myMapTwo[a]++;
        }

        vector<int> res;
        for(int i = 100; i <= 999; i++) {
            int n = i, c = 0;
            while(n > 0) {
                if(myMapTwo.find(n%10) != myMapTwo.end()) {
                    myMapTwo[n%10]--;
                    if(myMapTwo[n%10] == 0) {
                        int x = n%10;
                        myMapTwo.erase(x);
                    }
                    c++;
                }
                n /= 10;
            }
            myMapTwo = myMap;
            if(c == 3 and i%2 ==0) {
                res.push_back(i);
            }
        }
        return res;
    }
};