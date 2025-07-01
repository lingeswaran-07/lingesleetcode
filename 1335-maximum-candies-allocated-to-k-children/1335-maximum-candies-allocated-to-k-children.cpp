class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long l=1;
        long long h=*max_element(candies.begin(),candies.end());
        long long m;
        long long ans=0;
        while(l<=h){
            m=l+(h-l)/2;
            long long cnt=0;
            for(long long i:candies){
                if(i>=m){
                    cnt+=(i/m);
                }
            }
            if(cnt>=k){
                ans=max(m,ans);
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return ans;
        
    }
};