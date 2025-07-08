class Solution {
public:
    string interpret(string command) {
        stack<char>st;
        int n=command.length();
        string res="";
        for(int i=0;i<n;i++){
            if(!st.empty() && (st.top()=='(' && command[i]==')')){
                res+='o';
                st.pop();
            }
            else if(command[i]!='(' && command[i]!=')'){
            
                res+=command[i];
            }

            if(command[i]=='(' && command[i+1]==')'){
                st.push(command[i]);
            }



        }
        return res;
        
    }
};