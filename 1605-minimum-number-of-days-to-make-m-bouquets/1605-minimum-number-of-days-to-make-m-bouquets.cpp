class Solution {
public:

    int pos(vector<int>&bloomDay,int day,int m,int k){
        int n=bloomDay.size();
        int cnt=0,nb=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                nb+=(cnt/k);
                cnt=0;
            }
        }
        nb+=(cnt/k);
       if(n<(m*k)) return -1;
        if(nb>=m) {
            return 1;
        }
        else{
            return 0;
        }
    } 
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        long long val=m*1LL*k*1LL;
         int n=bloomDay.size();
        int ans=-1;
         if(val>n) return -1;
        while(l<=h){
            int mid=l+(h-l)/2;
             if(pos(bloomDay,mid,m,k)==1){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
           

        }
        
    return ans;
    }

};