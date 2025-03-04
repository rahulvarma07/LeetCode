class Solution {
public:
    bool check = false;
    long long int powerFunc(long long int n){
        if(n == 1){
            return 3;
        }
        if(n == 0) return 1;
        long long int x = powerFunc(n/2);
        if(n%2){
            return x*x*3;
        }
        else return x*x;
    }
    void generateAllSubSets(int n, vector<long long int>&p, long long int sum, int i){
        if(i == p.size()){
            if(sum == n){
                check = true;
            }
            return;
        }
        if(check == true) return;
        sum += p[i];
        generateAllSubSets(n, p, sum, i+1);
        sum -= p[i];
        generateAllSubSets(n, p, sum, i+1);
    }

    bool checkPowersOfThree(int n) {
        vector<long long int>powersOfThree;
        for(int i = 0; i <= 15; i++){
            long long int x = powerFunc(i);
            if(x <= n) powersOfThree.push_back(x);
            else break;
        }
        long long int sum = 0;
        generateAllSubSets(n, powersOfThree, sum, 0);
        return check;
    }
};