class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.length();
        int last=num[0];
        int cnt=1;
        int ans=-1;
        for(int i=1;i<n;i++){
            if(last==num[i]){
                cnt++;
                if(cnt>=3){
                    int aa=num[i]-'0';
                    cout<<aa<<" ";
                    if(aa>ans){
                        ans=aa;
                    }
                }
            }
            else{
                cnt=1;
            }
            last=num[i];
        }
        string b=to_string(ans);
        for(int i=0;i<2;i++){
            b+=to_string(ans);
        }
        return ans==-1?"":b;
    }
};