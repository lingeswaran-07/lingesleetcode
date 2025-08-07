class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        int ocnt=0;
        int ccnt=0;
        stack<char>st;
        for(int i=0;i<n;i++){
                // if(s[i]=='('){
                //     ocnt++;
                // }
                // else if(s[i]==')'){
                //     if(ocnt>0){
                //     ocnt--;
                //     }
                //     else{
                //         ccnt++;
                //     }
                // }
                
                   
               
                if(!st.empty() && (st.top()=='(' && s[i]==')')){
                    st.pop();
                }
                else{
                     st.push(s[i]);
                }
        }
        return st.size();

    }
};