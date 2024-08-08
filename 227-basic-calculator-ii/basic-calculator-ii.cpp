class Solution {
public:
    int calculate(string s) {
       string s1 = "";
       string str = "";
       int ans = 0;
       int ind = 0;
       stack<int>myNums; 

       for(int i = 0; i < s.size(); i++){
         if(s[i] != ' ') s1 += s[i];
       }

       while(s1[ind] >= '0' && s1[ind] <= '9'){
        str += s1[ind];
        ind += 1;
       }
       myNums.push(stoi(str));
        
       for(int i = ind; i < s1.size(); i++){
          if(s1[i] >= '0' && s1[i] <= '9'){

            if(s1[i-1] == '+'){
                str = "";
                while(s1[i] >= '0' && s1[i] <= '9'){
                    str += s1[i];
                    i += 1;
                }
                myNums.push(stoi(str));
            }

            else if(s1[i-1] == '-'){
                str = "";
                while(s1[i] >= '0' && s1[i] <= '9'){
                    str += s1[i];
                    i += 1;
                }
                myNums.push(0- stoi(str));
            }

            else if(s1[i-1] == '*'){
                str = "";
                int t = myNums.top();
                myNums.pop();
                while(s1[i] >= '0' && s1[i] <= '9'){
                    str += s1[i];
                    i += 1;
                }
                int a = stoi(str);
                myNums.push(t*a);
            }

            else if(s1[i-1] == '/'){
                str = "";
                int t = myNums.top();
                myNums.pop();
                while(s1[i] >= '0' && s1[i] <= '9'){
                    str += s1[i];
                    i += 1;
                }
                int a = stoi(str);
                myNums.push(t/a);
            }
            
          }
       } 

       while(!myNums.empty()){
        ans += myNums.top();
        myNums.pop();
       }
       return ans;
    }
};