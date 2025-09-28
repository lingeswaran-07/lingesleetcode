class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        bool flag=0;
        int cnt=0;
        while(n!=0){
            int digit=n%10;
            if(digit!=0){
            ans.push_back((digit)*(pow(10,cnt)));
            }
            cnt++;
            n/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};