class Solution {
  bool judgeSquareSum(int c) {
    if(c == 1)return true;
    int n = sqrt(c).toInt();
    int i = 0;
    int j = n;
    while(i <= j){
        dynamic res = (i * i) + (j * j);
        if(res == c){
            return true;
        }
        else if(res > c){
            j -= 1;
        }
        else{
            i += 1;
        }
    }
    return false;
  }
}