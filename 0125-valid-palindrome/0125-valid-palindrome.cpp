class Solution {
public:
    bool isPalindrome(string s) {
    string st="";
    for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            st+=tolower(s[i]);
        }

    }
    string a=st;
    reverse(a.begin(),a.end());
    if(st==a){
        return true;
    }
    else{
        return false;
    }
    



        
    }
};