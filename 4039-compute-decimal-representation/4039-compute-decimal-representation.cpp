class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        bool flag=0;
        int cnt=0;
        long m=1;
        while(n!=0){
            int digit=n%10;
            if(digit!=0){
            ans.push_back((digit)*(m));
            }
            m*=10;
            n/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};