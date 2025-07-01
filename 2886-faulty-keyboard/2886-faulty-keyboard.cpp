class Solution {
public:
    string finalString(string s) {
        int n=s.length();
        string ans="";
        for(char ch :s){
            if(ch=='i'){
                reverse(ans.begin(),ans.end());
            }
            else{
                ans+=ch;
            }
            
        }
        return ans;
        
    }
};