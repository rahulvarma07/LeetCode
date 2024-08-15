class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fdollars = 0, tdollars = 0, twdollars = 0;
        for(int i = 0; i < bills.size(); i++){
            cout << bills[i] << " ";
            if(bills[i] == 5){
                fdollars += 1;
            }
            else if(bills[i] == 10){
                tdollars += 1;
                if(fdollars <= 0) return false;
                fdollars -= 1;
            }
            else{
                if(fdollars >= 1 && tdollars >= 1){
                    fdollars -= 1;
                    tdollars -= 1;
                }
                else if(fdollars >= 3){
                    fdollars -= 3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};