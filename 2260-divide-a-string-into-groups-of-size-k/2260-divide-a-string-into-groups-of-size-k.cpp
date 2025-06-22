class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.length();
        vector<string>ans;
        int cnt=0;
        string a="";
        for(int i=0;i<n;i++){
            cnt++;
            a+=s[i];
            if(cnt==k){
                ans.push_back(a);
                a="";
                cnt=0;
            }
            else if(cnt<k && i==n-1){
                while(cnt<k){
                    a+=fill;
                    cnt++;
                }
                ans.push_back(a);
             }

        }
        return ans;
    }
};