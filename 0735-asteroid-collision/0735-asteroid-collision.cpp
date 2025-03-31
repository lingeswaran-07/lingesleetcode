class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            bool flag=0;
             
             while(!st.empty() && asteroids[i]<0 && st.top()>0){
                if(st.top()+asteroids[i]==0){
                     st.pop();
                     flag=1;
                     break;
                }
                if((st.top()+asteroids[i])>0){
                    flag=1;
                    break;
                }
                else{
                    st.pop();
                }
           

            }
            if(!flag){
                   st.push(asteroids[i]);
            }
            
            
        }

        vector<int> res(st.size());
        for (int i = res.size() - 1; i >= 0; --i) {
            res[i] = st.top();
            st.pop();
        }
        return res;

    }
};