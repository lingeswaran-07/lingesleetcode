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
        if(word.length()<3){
            return false;
        }
        int d=0;
        int v=0;
        int c=0;
        for(char ch :word){
            if(isdigit(ch)){
                    d=1;
            }
            else if(isalpha(ch)){
                
             if(!isvowel(ch)){
                c=1;
             }
             else{
                v=1;
             }
            }
            else{
                return false;
            }
        }
        if( v==1 && c==1 ){
        
            return true;
        }
        else{
            return false;
        }
        
    }
};