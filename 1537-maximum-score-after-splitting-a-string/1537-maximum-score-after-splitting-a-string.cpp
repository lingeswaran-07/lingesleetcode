class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        int res=0;
        int totone=0;
        for(char ch:s){
            if(ch=='1'){
                totone++;
            }
        }
        int left=0;
        int right=totone;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                left++;
            }
            else if(s[i]=='1'){
                right--;
            }
            int sum=left+right;
             res=max(sum,res);
        }
       
        return res;
    }
};