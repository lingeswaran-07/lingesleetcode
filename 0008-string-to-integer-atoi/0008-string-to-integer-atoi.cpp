class Solution {
public:
    int myAtoi(string s) {
        int i=0,res=0,sign=1;

        while(s[i]==' '){
            i++;
        }

        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-'){
            sign=-1;
            }
            i++;
        }

        while(s[i]>='0' && s[i]<='9'){
        if(res>INT_MAX/10 || (res==INT_MAX/10 && s[i]-'0'>7)){
             return sign==-1 ? INT_MIN:INT_MAX;

        }
        res=10*res+(s[i++]-'0');
        }
        return res*sign;
    }
};