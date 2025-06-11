class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        int cnt=0;
        for(char ch:s){
            if(ch=='('){
                st.push(0);
            }
            else{
                int i=st.top();
                st.pop();
                int o=st.top();
                st.pop();
                int score=(i==0) ?1:2*i;
                st.push(o+score);
            }
           
        }
        return st.top();
    }
};