class Solution {
public:
    string largestOddNumber(string num) {
        int a=num.length()-1;        
        while(a>=0){
            char ch=num[a];
            int  d=ch-'0';
            if(d%2==1){
                return num.substr(0,a+1);
            }
            a--;
        }
         return "";
        
    }
};