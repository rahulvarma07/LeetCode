class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long int m = mass;
        for(auto a: asteroids) {
            if(m >= a) {
                m += a;
            }else{
                return false;
            }
        }
        return true;
    }
};