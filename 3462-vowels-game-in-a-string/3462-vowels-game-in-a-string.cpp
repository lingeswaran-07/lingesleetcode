class Solution {
public:
    bool isvowel(char &ch){
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }
    bool doesAliceWin(string s) {
        int a=0;
        int b=0;
        int cnt=0;
        for(char ch:s){
            if(isvowel(ch)){
                    cnt++;
                    if(cnt%2==0){
                        b=1;
                    }
                    else if(cnt%2!=0){
                        a=1;
                    }
            }
        }
        if(cnt==0){
            return false;
        }
        if(cnt==1){
            return true;
        }
        return a;
    }
};