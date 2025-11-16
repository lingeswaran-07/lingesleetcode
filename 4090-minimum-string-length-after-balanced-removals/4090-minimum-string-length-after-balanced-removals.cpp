class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int cnta=0;
        int cntb=0;
        for(char ch:s){
            if(ch=='a'){
                cnta++;
            }
            else{
                cntb++;
            }
        }
        return abs(cnta-cntb);
    }
};