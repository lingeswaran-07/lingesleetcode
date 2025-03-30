class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
      int n=arr.size();
      vector<int>pse(n);
      vector<int>nse(n);
      stack<int>st1;
      stack<int>st2;
      for(int  i=0;i<n;i++){
        while(!st1.empty() && arr[st1.top()]>arr[i]){
            st1.pop();
        }
        pse[i]=st1.empty()?-1:st1.top();
        st1.push(i);
      }


      for(int  i=n-1;i>=0;i--){
        while(!st2.empty() && arr[st2.top()]>=arr[i]){
            st2.pop();
        }
        nse[i]=st2.empty()?n:st2.top();
        st2.push(i);
      }

      int mod=(1e9+7);
      long long  tot=0;

      for(int i=0;i<n;i++){
        long long  l=i-pse[i];
        long long r=nse[i]-i;
       tot = (tot + (l * r % mod) * arr[i] % mod) % mod;
      }

      return tot;


       
    }
};