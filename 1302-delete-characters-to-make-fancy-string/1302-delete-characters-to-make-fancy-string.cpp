class Solution {
public:
    string makeFancyString(string s) {
        string res="";
        int count=1;
        for(int i=0;i<s.length();i++){
            if( s[i]==s[i+1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>=3) continue;
            res+=s[i];
        }
        return res;
    }
};