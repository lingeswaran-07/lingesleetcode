class Solution {
public:
 
   bool isvowel(char ch){
    if(ch=='A' || ch=='E' ||  ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;

    }
    else {
        return false;
    }
   }
    bool isValid(string word) {
        int d=0;
        int v=0;
        int cnt=0;
        int c=0;
        for(char ch :word){
            cnt++;
            if(isdigit(ch)){
                    d=1;
            }
            else if(isvowel(ch)){
                v=1;
            }
            else if(!isvowel(ch) && isalpha(ch)){
                c=1;
            }
            else{
                return false;
            }
        }
        cout<<cnt;
        if(cnt>=3 && v==1 && c==1 ){
        
            return true;
        }
        else{
            return false;
        }
        
    }
};