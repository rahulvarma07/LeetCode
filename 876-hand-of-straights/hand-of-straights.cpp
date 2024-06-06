class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(), hand.end());
        unordered_map<int,int>mymap;
        int count = groupSize;
        int temp = groupSize;
        for(auto a:hand){
            mymap[a] += 1;
        }
        for(int i = 0; i < hand.size(); i++){
            int a = hand[i];
            while(temp --){
                if(mymap.find(a) == mymap.end()) break; 
                if(mymap.find(a) != mymap.end()){
                    count -= 1;
                    mymap[a] -= 1;
                }
                if(mymap[a] <= 0) mymap.erase(a);
                a += 1;
            }
            if(count != 0 and count != groupSize) return false;
            temp = groupSize;
            count = groupSize;
        }

        return true;
    }
};