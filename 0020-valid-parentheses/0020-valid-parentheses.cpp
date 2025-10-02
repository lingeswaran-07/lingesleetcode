class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        string brac="(){}[]";
        for(char ch:s){
        if(!st.empty()){
            if(ch==')'){
                if(st.top()!=brac[0]){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            else if(ch=='}'){
                if(st.top()!=brac[2]){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            else if(ch==']'){
                if(st.top()!=brac[4]){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            else{
                st.push(ch);
            }
            }
            else{
                st.push(ch);
            }
        }
        return st.empty();
    }
};